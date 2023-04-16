%{
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

//Esentials
extern FILE* yyin;
extern char* yytext;
extern int yylineno;

//Will tell if the program compiles correctly
int Logical_Works = 1;

//
int File_ptr;
char Buffer[100];

//Used for functions
int Parameter_NR = 0;
char Function_Name[100];

//Functions
int Search(char* VarType, char* Identifier);
int SearchVarName(char *Identifier);
char *GetType(char *Identifier);
int CorrectParameters(char *Identifier);
int changeNatValue(char *VarType, char *Identifier, int valoareNat);
int changeRealValue(char *VarType, char *Identifier, float valoareReal);
int changeStrValue(char *VarType, char *Identifier, char *valoareSir);
int changeCharValue(char *VarType, char *Identifier, char valoareCara);
int changeBoolValue(char *VarType, char *Identifier, char *valoareBool);
int SearchVal(char *Identifier);
%}

%union 
{
int IntVal;
float FloatVal;
char* BoolVal;
char CharVal;
char* StringVal;
char* VarName;
char* VarType;
}

%token MainFunction 
CInt CFloat CChar CString CBool CStruct CArray CFunction CDefine
CIf CElse CFor CWhile CDoWhile 
CCmp Eval
CCopy StrCmp Concat

%token <IntVal> Int_Val
%token <FloatVal> Float_Val
%token <CharVal> Char_Val
%token <StringVal> String_Val
%token <BoolVal> Bool_Val
%token <VarName> Identif

%type <IntVal> Int_Value
%type <FloatVal> Float_Value
%type <CharVal> Char_Value
%type <StringVal> String_Value
%type <BoolVal> Bool_Value

%type <IntVal> Int_Operation
%type <IntVal> Int_Operations

%left '+' '-'
%left '*' '/'
%start S
%%

//Start
S: Base_Program
      {     
            if(Logical_Works == 1)
            {
                  printf("Language accepted! Congrats!\n");
            }
            else 
            {
                  printf("Compilation Error! \n");
            }
      }
 ;

Base_Program: Main_Program
            | Global_Declarations Main_Program
            | Global_Declarations Main_Program Global_Declarations
            ;

Global_Declarations: Global_Declarations Global_Declaration
                   | Global_Declaration
                   ;

Global_Declaration: Variable              {write(File_ptr, "Global\n", strlen("Global\n")); }
                  | Assign_Declaring      {write(File_ptr, "Global\n", strlen("Global\n")); }
                  | array                 {write(File_ptr, "Global\n", strlen("Global\n")); }
                  | Object                
                  | definitie             {write(File_ptr, "Definition\n", strlen("Definition\n")); }
                  | Function
                  ;

Declarations: Declarations Declaation   
            | Declaation                
            ;

Declaation: Variable          {write(File_ptr, "Local\n", strlen("Local\n"));}
          | Assign_Declaring  {write(File_ptr, "Local\n", strlen("Local\n"));}
          | array             {write(File_ptr, "Local\n", strlen("Local\n"));}
          ;

Variable: CInt Identif 
            { 
                  if(SearchVarName($2)) Logical_Works = 0; 
                  snprintf(Buffer, 100, "Int %s ", $2); 
                  write(File_ptr, Buffer, strlen(Buffer)); 
            }
        | CChar Identif 
            { 
                  if(SearchVarName($2)) Logical_Works = 0;
                  snprintf(Buffer, 100, "Char %s = . ", $2); 
                  write(File_ptr, Buffer, strlen(Buffer)); 
            }
        | CFloat Identif 
            { 
                  if(SearchVarName($2)) Logical_Works = 0; 
                  snprintf(Buffer, 100, "Float %s = 0.00 ", $2); 
                  write(File_ptr, Buffer, strlen(Buffer)); 
            }
        | CString Identif 
            { 
                  if(SearchVarName($2)) Logical_Works = 0; 
                  snprintf(Buffer, 100, "String %s = \"\" ", $2); 
                  write(File_ptr, Buffer, strlen(Buffer)); 
            }
        | CBool Identif                                    
            { 
                  if(SearchVarName($2)) Logical_Works = 0; 
                  snprintf(Buffer, 100, "Bool %s = true ", $2); 
                  write(File_ptr, Buffer, strlen(Buffer)); 
            }
        ;

Assign_Declaring: CInt Identif '=' Int_Value          
                        { 
                              if(SearchVarName($2)) Logical_Works = 0; 
                              snprintf(Buffer, 100, "Int %s = %d ", $2, $4); 
                              write(File_ptr, Buffer, strlen(Buffer)); 
                        }
                | CFloat Identif '=' Float_Value            
                        { 
                              if(SearchVarName($2)) Logical_Works = 0; 
                              snprintf(Buffer, 100, "Float %s = %.3f ", $2, $4); 
                              write(File_ptr, Buffer, strlen(Buffer)); 
                        }
                | CString Identif '=' String_Value              
                        {
                              if(SearchVarName($2)) Logical_Works = 0; 
                              snprintf(Buffer, 100, "String %s = %s ", $2, $4); 
                              write(File_ptr, Buffer, strlen(Buffer)); 
                        }
                | CBool Identif '=' Bool_Value      
                        { 
                              if(SearchVarName($2)) Logical_Works = 0; 
                              snprintf(Buffer, 100, "Bool %s = %s ", $2, $4); 
                              write(File_ptr, Buffer, strlen(Buffer)); 
                        }
                | CChar Identif '=' Char_Value    
                        { 
                              if(SearchVarName($2)) Logical_Works = 0; 
                              snprintf(Buffer, 100, "Char %s = %c ", $2, $4); 
                              write(File_ptr, Buffer, strlen(Buffer)); 
                        }
                ;

Struct_Declarations: Struct_Declarations Struct_Declaration
                   | Struct_Declaration
                   ;

Struct_Declaration: Variable              {write(File_ptr, "Struct\n", strlen("Struct\n")); }
                  | Assign_Declaring      {write(File_ptr, "Struct\n", strlen("Struct\n")); }
                  | array                 {write(File_ptr, "Struct\n", strlen("Struct\n")); }
                  | Function
                  ;

Object: struct
      ;

struct: CStruct Identif  
            { 
                  if(SearchVarName($2)) Logical_Works = 0; 
                  snprintf(Buffer, 100, "Struct %s Construct\n", $2); 
                  write(File_ptr, Buffer, strlen(Buffer)); 
            } '{' Struct_Declarations '}'
      ;

Function_Declarations: Function_Declarations Function_Declaation   
                     | Function_Declaation                
                     ;

Function_Declaation: Variable          {write(File_ptr, "InFunction\n", strlen("InFunction\n"));}
                   | Assign_Declaring  {write(File_ptr, "InFunction\n", strlen("InFunction\n"));}
                   | array             {write(File_ptr, "InFunction\n", strlen("InFunction\n"));}
                   ;

Function: CFunction Identif '(' ')'  
            {
                  if(SearchVarName($2) == 1) Logical_Works = 0;
                  snprintf(Buffer, 100,"Function %s Construct \n", $2); 
                  write(File_ptr, Buffer, strlen(Buffer));
            } '{' Function_Declarations '}'

        | CFunction Identif '(' Declarations ')' 
            {
                  if(SearchVarName($2) == 1) 
                        Logical_Works = 0;
                  snprintf(Buffer, 100,"functie %s: \n", $2); 
                  write(File_ptr, Buffer, strlen(Buffer));
            } '{' Function_Declarations '}'
        ;

definitie: CDefine Identif Int_Val 
                  { 
                        if(SearchVarName($2)) Logical_Works = 0; 
                        snprintf(Buffer, 100, "Int %s = %d ", $2, $3); 
                        write(File_ptr, Buffer, strlen(Buffer)); 
                  }
         | CDefine Identif String_Val
                  {
                        if(SearchVarName($2)) Logical_Works = 0; 
                        snprintf(Buffer, 100, "String %s = %s ", $2, $3); 
                        write(File_ptr, Buffer, strlen(Buffer)); 
                  }
         | CDefine Identif Float_Val
                  { 
                        if(SearchVarName($2)) Logical_Works = 0; 
                        snprintf(Buffer, 100, "Float %s = %.3f ", $2, $3); 
                        write(File_ptr, Buffer, strlen(Buffer)); 
                  }
         | CDefine Identif Char_Val
                  { 
                        if(SearchVarName($2)) Logical_Works = 0; 
                        snprintf(Buffer, 100, "Char %s = %c ", $2, $3); 
                        write(File_ptr, Buffer, strlen(Buffer)); 
                  }
         | CDefine Identif Bool_Val
                  { 
                        if(SearchVarName($2)) Logical_Works = 0; 
                        snprintf(Buffer, 100, "Bool %s = %s ", $2, $3); 
                        write(File_ptr, Buffer, strlen(Buffer)); 
                  }
         ;
String_Value: String_Val {$$=$1;}
            ;
array: CArray CInt Identif '[' Int_Val ']' '=' '[' List_Int ']'     
                  { 
                        if(SearchVarName($3)) Logical_Works = 0; 
                        snprintf(Buffer, 100, "CArray %s ", $3); 
                        write(File_ptr, Buffer, strlen(Buffer)); 
                  }
     | CArray CInt Identif '[' Int_Val ']' '=' '[' ']'        
                  { 
                        if(SearchVarName($3)) Logical_Works = 0; 
                        snprintf(Buffer, 100, "CArray %s ", $3); 
                        write(File_ptr, Buffer, strlen(Buffer)); 
                  }
     | CArray CFloat Identif '[' Int_Val ']' '=' '[' List_Float ']'       
                  { 
                        if(SearchVarName($3)) Logical_Works = 0; 
                        snprintf(Buffer, 100, "CArray %s ", $3); 
                        write(File_ptr, Buffer, strlen(Buffer)); 
                  }
     | CArray CFloat Identif '[' Int_Val ']' '=' '[' ']'                               
                  { 
                        if(SearchVarName($3)) Logical_Works = 0; 
                        snprintf(Buffer, 100, "CArray %s ", $3); 
                        write(File_ptr, Buffer, strlen(Buffer)); 
                  }
     | CArray CChar Identif '[' Int_Val ']' '=' '[' List_Char ']'   
                  { 
                        if(SearchVarName($3)) Logical_Works = 0; 
                        snprintf(Buffer, 100, "CArray %s ", $3); 
                        write(File_ptr, Buffer, strlen(Buffer)); 
                  }
     | CArray CChar Identif '[' Int_Val ']' '=' '[' ']'                           
                  { 
                        if(SearchVarName($3)) Logical_Works = 0; 
                        snprintf(Buffer, 100, "CArray %s ", $3);
                        write(File_ptr, Buffer, strlen(Buffer)); 
                  }
     | CArray CBool Identif '[' Int_Val ']' '=' '[' List_Bool ']' 
                  { 
                        if(SearchVarName($3)) Logical_Works = 0; 
                        snprintf(Buffer, 100, "CArray %s ", $3); 
                        write(File_ptr, Buffer, strlen(Buffer)); 
                  }
     | CArray CBool Identif '[' Int_Val ']' '=' '[' ']'
                  { 
                        if(SearchVarName($3)) Logical_Works = 0; 
                        snprintf(Buffer, 100, "CArray %s ", $3); 
                        write(File_ptr, Buffer, strlen(Buffer)); 
                  }
     ;

//MAIN PROGRAM
Main_Program: MainFunction '('')' '{' '}'
            | MainFunction '('')' '{' Code '}'
             ;

Code: Code Code_Part
    | Code_Part
    ;


Code_Part: Interogations        // if-uri
         | Loops             // for, while, doWhile
         | Identif '(' ')'   //Function call
                  {
                        if(Search("Function",$1) == 0) 
                        {
                              printf("the function %s wasn't declared \n", $1); 
                              Logical_Works = 0;
                        }
                  }

         |Identif '('          
                  {
                        Parameter_NR=0; 
                        strcpy(Function_Name,$1);
                  } Function_Parameters ')' 

         | Identif '=' Identif     //Assignment : we check if they have the same type and are initialized
                  {
                        char *tip1 = GetType($1);  
                        if(tip1 == NULL) 
                              { 
                                    printf("the variable %s is uninitialized\n", $1); 
                                    Logical_Works = 0;
                              }
                        char *tip2 = GetType($3);  
                        if(tip2 == NULL) 
                              { 
                                    printf("the variable %s is uninitialized \n", $3); 
                                    Logical_Works = 0; 
                              }
                        if(tip1 && tip2 && strcmp(tip1,tip2) != 0) 
                              {
                                    printf("the variables %s and %s are not of the same type \n", $1, $3); 
                                    Logical_Works = 0;
                              }
                        printf("|%s| = |%d|, |%s| = |%d|\n", tip1, SearchVal($1),tip2,SearchVal($3));
                  }

         | Declarations      //local declarations
         
         | Identif '=' Int_Value    // Assignment to natural numbers (search if was declared, then updates symbol_table.txt)
                  {
                        if(Search("Int", $1) == 0) 
                              {
                                    Logical_Works = 0; 
                                    printf("variable %s error \n", $1);
                              } 
                        changeNatValue("Int", $1, $3);
                  }

         | Identif '=' Float_Value        // Assignment to real numbers
                  {
                        if(Search("Float", $1) == 0) 
                        {
                              Logical_Works = 0; 
                              printf("variable %s error \n", $1);
                        }
                        changeRealValue("Float", $1, $3);

                  }

         | Identif '=' String_Value       // Assignment to CString
                  { 
                        if(Search("String", $1) == 0)
                              {
                                    Logical_Works = 0; 
                                    printf("variable %s error \n", $1);
                              } 
                        changeStrValue("String", $1, $3);
                  }

         | Identif '=' Char_Value         // Assignment to character
                  { 
                        if(Search("Char", $1) == 0) 
                              {
                                    Logical_Works = 0; 
                                    printf("variable %s error \n", $1);
                              } 
                        changeCharValue("Char", $1, $3);
                  }

         | Identif '=' Bool_Value   // Assignment to bool
                  { 
                        if(Search("Bool", $1) == 0) 
                              {
                                    Logical_Works = 0;
                                    printf("variable %s error \n", $1);
                              }
                        changeBoolValue("Bool", $1, $3);
                  }

         | Identif '=' Int_Operations     // Assigning an expression to a natural value
                  { 
                        if(Search("Int", $1) == 0) 
                              {
                                    Logical_Works = 0;
                                    printf("variable %s error \n", $1);
                              } 
                        changeNatValue("Int", $1, $3);
                  } 

         | Eval '(' Int_Operations ')'    // Eval(expr) function 
                  {
                        if( Logical_Works == 1 )
                        {
                              printf("We have the value %d \n", $3); 
                        }
                  }
         ;

// Real calculus of an expression
Int_Operations: Int_Operation {$$ = $1;}
              | Int_Operations '+' Int_Operations { $$ = $1 + $3; }
              | Int_Operations '-' Int_Operations { $$ = $1 - $3; }
              | Int_Operations '*' Int_Operations { $$ = $1 * $3; }
              | Int_Operations '/' Int_Operations { $$ = $1 / $3; }
              ;
Int_Operation:
                  //We check if the variable is initialized and is it of type int, and we obtain its value from the table
                  Identif 
                  {
                        char *VarType = GetType($1); 
                        if (VarType == NULL)
                        {
                              printf("the variable %s was not initialized \n", $1);
                              Logical_Works = 0;
                        }
                        if (VarType && strcmp(VarType, "Int") != 0)
                        {
                              printf("the variable %s is not of type Int \n", $1);
                              Logical_Works = 0;
                        }
                        if (VarType && strcmp(VarType, "Int") == 0 ) 
                        {
                              //printf("we return %s\n",$1);
                              $$ =  SearchVal($1);
                        }
                  }

                  //We assign the value to Int_Val
                  | Int_Val {$$ = $1;}
                  ;

Function_Parameters: Function_Parameters ',' Identif 
                              {
                                    Parameter_NR++; 
                                    CorrectParameters($3); 
                              }
                   | Identif { Parameter_NR++; CorrectParameters($1); }
                   ;

// If-uri
Interogations: Interogations Interogation
             | Interogation
             ;
Interogation: CIf '(' Condition ')' '{' Code '}'
            | CIf '(' Condition ')' '{' Code '}' CElse '{' Code '}'
            ;
Condition: Identif CCmp Identif
        | Identif CCmp Int_Val
        | Identif CCmp Float_Val
        | StrCmp '(' Identif ',' Identif ')'
        ;

//while, for, doWhile
Loops: Loops Loop
     | Loop
     ;
Loop: CFor Assign_Declaring ';' Identif ';' Int_Val '{' Code '}'
    | CFor Assign_Declaring ';' Int_Val ';' Int_Val '{' Code '}'
    | CFor Assign_Declaring ';' CChar ';' Int_Val '{' Code '}'
    | CFor Assign_Declaring ';' Float_Val ';' Float_Val '{' Code '}'
    | CFor Assign_Declaring ';' Identif ';' Float_Val '{' Code '}'
    | CWhile '(' Condition ')' '{' Code '}'
    | CDoWhile '{' Code '}' CWhile '(' Condition ')'
    ;


//for natural numbers
Int_Value: Int_Val {$$=$1;}
         ;
List_Int: Int_Val
        | List_Int ',' Int_Val
        ;

//for real numbers
Float_Value: Float_Val {$$=$1;}
           ;
List_Float: Float_Val
          | List_Float ',' Float_Val
          ;

//for characters
Char_Value: Char_Val {$$=$1;}
          ;
List_Char: Char_Val
         | List_Char ',' Char_Val
         ;

//for boolean values
Bool_Value: Bool_Val {$$=$1;}
          ;
List_Bool: Bool_Val
         | List_Bool ',' Bool_Val
         ;

%%

int yyerror(char * s)
{
      printf("Error in code: %s at line %d\n",s,yylineno);
}

int Search(char* VarType, char* Identifier)
{
      char Line[100]="";
      char  c;
      int Index = 0;
      int Found = 0;

      char Variable[100];
      strcpy(Variable, VarType);
      strcat(Variable, " ");
      strcat(Variable, Identifier);      

      //Read the variables file
      lseek(File_ptr, 0, SEEK_SET);
      while(1)
      {
            bzero(Line, 100);
            Index = 0;
            //Read a line
            while(1)
            {
                  int r = read(File_ptr, &c, 1);
                  if( r == 0 || c == '\n')
                        break;     
                  Line[Index++] = (char )c;                   
            }

            //We've finished reading from file
            if (Index == 0)
                  break;
            
            //We remove the local/global part
            if(strstr(Line,"local"))
                  Line[strlen(Line) - 6] = '\0';      
            else if(strstr(Line, "global"))  
                  Line[strlen(Line) - 7] = '\0';   
            else Line[strlen(Line) - 2] = '\0';

            //We remove the "="
            if(strstr(Line,"="))
            {
                  char *temp = strtok(Line, "=");
                  temp[strlen(temp) - 1] = '\0';
                  strcpy(Line, temp);
            }

            //We compare the line with the variable
            if (strcmp(Line, Variable) == 0)
                  Found = 1;
      }

      return Found;
}

int SearchVarName(char *Identifier)
{
      int flag = 0;
      flag += Search("Int",Identifier);
      flag += Search("Float",Identifier);
      flag += Search("String",Identifier);
      flag += Search("Char",Identifier);
      flag += Search("Bool",Identifier);
      flag += Search("Function", Identifier);
      flag += Search("CArray", Identifier);
      flag += Search("CStruct", Identifier);
      if(flag == 0)
            return 0;
      printf("variable %s already exists \n" ,Identifier);
      return 1;
}

char *GetType(char *Identifier)
{
      char *p = (char *)malloc(20);

      if( Search("Int",Identifier) )
            strcpy(p, "Int");
      else if( Search("Float",Identifier) )
            strcpy(p, "Float");
      else if( Search("String",Identifier) )
            strcpy(p, "String");
      else if( Search("Bool",Identifier) )
            strcpy(p, "Bool");
      else if( Search("Char",Identifier) )
            strcpy(p, "Char");
      else if ( Search("Function",Identifier) )
            strcpy(p, "Function");
      else if( Search("CArray",Identifier) )
            strcpy(p, "CArray");
      else if( Search("CStruct", Identifier) )
            strcpy(p, "CStruct");
      else  p = NULL;

      return p;
}

int CorrectParameters(char *Identifier)
{
      //We're looking for the function in the file

      char Line[100]="";
      char c;
      int Index = 0;
      int Found = 0;

      char Variable[100];
      strcpy(Variable, "Function ");
      strcat(Variable, Function_Name);      

      //Read the variables file
      lseek(File_ptr, 0, SEEK_SET);
      while(1)
      {
            bzero(Line, 100);
            Index = 0;
            //Read a line
            while(1)
            {
                  int r = read(File_ptr, &c, 1);
                  if( r == 0 || c == '\n')
                        break;     
                  Line[Index++] = (char )c;                   
            }

            //We've finished reading from file
            if (Index == 0)
                  break;
            
            //Remove the local/global part
            if(strstr(Line,"local"))
                  Line[strlen(Line) - 6] = '\0';      
            else if(strstr(Line, "global"))  
                  Line[strlen(Line) - 7] = '\0';   
            else Line[strlen(Line) - 2] = '\0';

            //If we found the function in the file
            if (strcmp(Line, Variable) == 0)
            {
                  //We go over the declaration
                  bzero(Line, 100);
                  Index = 0;
                  while(1)
                  {
                        read(File_ptr, &c, 1);
                        if(c == '\n')
                        break;                        
                        Line[Index++] = (char )c;                   
                  }

                  //We go through each line (parameter)
                  int parametru = 1;
                  while(parametru < Parameter_NR)
                  {
                        //We read parameterNumber lines
                        bzero(Line, 100);
                        Index = 0;
                        while(1)
                        {
                              read(File_ptr, &c, 1);
                              if(c == '\n')
                                    break;                        
                              Line[Index++] = (char )c;                   
                        }
                        parametru ++;
                  }
                  
                  //We test if what we entered as a parameter, is it the same type
                  char *tipVariabila = GetType(Identifier);
                  char *tipParametru = strtok(Line, " ");
                  if (!tipVariabila)
                  {
                        printf("variable %s was not declared! \n", Identifier);
                        Logical_Works = 0;
                  }
                  if(tipVariabila && strcmp(tipVariabila,tipParametru) != 0)
                  {
                        printf("variable %s is not of type %s! \n", Identifier, tipParametru);
                        Logical_Works = 0 ;
                  }
            }
      }
      return 0;
}
int changeNatValue(char *VarType, char *Identifier, int valoareNat)
{
      char Line[100]="";
      char c;
      char scope[10];
      int Index = 0;
      int Found=0;

      char Variable[100];
      strcpy(Variable, VarType);
      strcat(Variable, " ");
      strcat(Variable, Identifier);      

      //Read the variables file
      lseek(File_ptr, 0, SEEK_SET);
      while(1)
      {
            bzero(Line, 100);
            Index = 0;
            //Read a line
            while(1)
            {
                  int r = read(File_ptr, &c, 1);
                  if( r == 0 || c == '\n')
                        break;     
                  Line[Index++] = (char )c;                   
            }

            //We've finished reading
            if (Index == 0)
                  break;

            //We need to know how far we have to go back
            int inapoi = strlen(Line) + 1;
            
            //Remove the local/global part
            if(strstr(Line,"local"))
                  {Line[strlen(Line) - 6] = '\0'; strcpy(scope,"local");}     
            else if(strstr(Line, "global"))  
                  {Line[strlen(Line) - 7] = '\0'; strcpy(scope,"global");}

            //We remove the "="
            if( strstr(Line, "="))
            {
                  char *temp = strtok(Line, "=");
                  temp[strlen(temp) - 1] = '\0';
                  strcpy(Line, temp);
            }

            //If we found the variable in the file
            if (strcmp(Line, Variable) == 0)
            {
                  //We copy everything after the file (and have a chance to be overwritten)
                  char rest[10000];
                  bzero(rest, 10000);
                  pread(File_ptr, rest, 10000, lseek(File_ptr,0,SEEK_CUR));

                  //We create the new line
                  lseek(File_ptr, -inapoi, SEEK_CUR);
                  char temp[50];
                  strcpy(temp, Line);
                  snprintf(Line,100,"%s = %d %s",temp, valoareNat, scope);

                  //We overwrite
                  write(File_ptr, Line, strlen(Line));
                  write(File_ptr,"\n",1);
                  write(File_ptr, rest, strlen(rest));
                  return 0;
            }
      }
}

int changeRealValue(char *VarType, char *Identifier, float valoareReal)
{
      char Line[100]="";
      char c;
      char scope[10];
      int Index = 0;
      int Found=0;
   
      char Variable[100];
      strcpy(Variable, VarType);
      strcat(Variable, " ");
      strcat(Variable, Identifier);      

      //Read the variables file
      lseek(File_ptr, 0, SEEK_SET);
      while(1)
      {
            bzero(Line, 100);
            Index = 0;
            //Read a line
            while(1)
            {
                  int r = read(File_ptr, &c, 1);
                  if( r == 0 || c == '\n')
                        break;     
                  Line[Index++] = (char )c;                   
            }

            //We've finished reading
            if (Index == 0)
                  break;

            //We need to know how far we have to go back
            int inapoi = strlen(Line) + 1;
            
            //Remove the local/global part
            if(strstr(Line,"local"))
                  {Line[strlen(Line) - 6] = '\0'; strcpy(scope,"local");}     
            else if(strstr(Line, "global"))  
                  {Line[strlen(Line) - 7] = '\0'; strcpy(scope,"global");}

            //We remove the "="
            if( strstr(Line, "="))
            {
                  char *temp = strtok(Line, "=");
                  temp[strlen(temp) - 1] = '\0';
                  strcpy(Line, temp);
            }

            //If we found the variable in the file
            if (strcmp(Line, Variable) == 0)
            {
                  //We copy everything after the file (and have a chance to be overwritten)
                  char rest[10000];
                  bzero(rest, 10000);
                  pread(File_ptr, rest, 10000, lseek(File_ptr,0,SEEK_CUR));

                  //We create the new line
                  lseek(File_ptr, -inapoi, SEEK_CUR);
                  char temp[50];
                  strcpy(temp, Line);
                  snprintf(Line,100,"%s = %.5f %s",temp, valoareReal, scope);

                  //We overwrite
                  write(File_ptr, Line, strlen(Line));
                  write(File_ptr,"\n",1);
                  write(File_ptr, rest, strlen(rest));
                  return 0;
            }
      }
}
int changeStrValue(char *VarType, char *Identifier, char *valoareSir)
{
      char Line[100]="";
      char c;
      char scope[10];
      int Index = 0;
      int Found=0;

      char Variable[100];
      strcpy(Variable, VarType);
      strcat(Variable, " ");
      strcat(Variable, Identifier);      

      //Read the variables file
      lseek(File_ptr, 0, SEEK_SET);
      while(1)
      {
            bzero(Line, 100);
            Index = 0;
            //Read a line
            while(1)
            {
                  int r = read(File_ptr, &c, 1);
                  if( r == 0 || c == '\n')
                        break;     
                  Line[Index++] = (char )c;                   
            }

            //We've finished reading
            if (Index == 0)
                  break;

            //We need to know how far we have to go back
            int inapoi= strlen(Line) + 1;
            
            //Remove the local/global part
            if(strstr(Line,"local"))
                  {Line[strlen(Line) - 6] = '\0'; strcpy(scope,"local");}     
            else if(strstr(Line, "global"))  
                  {Line[strlen(Line) - 7] = '\0'; strcpy(scope,"global");}

            //We remove the "="
            if( strstr(Line, "="))
            {
                  char *temp = strtok(Line, "=");
                  temp[strlen(temp) - 1] = '\0';
                  strcpy(Line, temp);
            }

            //If we found the variable in the file
            if (strcmp(Line, Variable) == 0)
            {
                  //We copy everything after the file (and have a chance to be overwritten)
                  char rest[10000];
                  bzero(rest, 10000);
                  pread(File_ptr, rest, 10000, lseek(File_ptr,0,SEEK_CUR));

                  //We create the new line
                  lseek(File_ptr, -inapoi, SEEK_CUR);
                  char temp[50];
                  strcpy(temp, Line);
                  snprintf(Line,100,"%s = %s %s",temp, valoareSir, scope);

                  //We overwrite
                  write(File_ptr, Line, strlen(Line));
                  write(File_ptr,"\n",1);
                  write(File_ptr, rest, strlen(rest));
                  return 0;
            }
      }
}

int changeCharValue(char *VarType, char *Identifier, char valoareCara)
{
      char Line[100]="";
      char c;
      char scope[10];
      int Index = 0;
      int Found=0;

      char Variable[100];
      strcpy(Variable, VarType);
      strcat(Variable, " ");
      strcat(Variable, Identifier);      

      //Read the variables file
      lseek(File_ptr, 0, SEEK_SET);
      while(1)
      {
            bzero(Line, 100);
            Index = 0;
            //Read a line
            while(1)
            {
                  int r = read(File_ptr, &c, 1);
                  if( r == 0 || c == '\n')
                        break;     
                  Line[Index++] = (char )c;                   
            }

            //We've finished reading 
            if (Index == 0)
                  break;

            //We need to know how far we have to go back
            int inapoi = strlen(Line) + 1;
            
            //Remove the local/global part
            if(strstr(Line,"local"))
                  {Line[strlen(Line) - 6] = '\0'; strcpy(scope,"local");}     
            else if(strstr(Line, "global"))  
                  {Line[strlen(Line) - 7] = '\0'; strcpy(scope,"global");}

            //We remove the "="
            if( strstr(Line, "="))
            {
                  char *temp = strtok(Line, "=");
                  temp[strlen(temp) - 1] = '\0';
                  strcpy(Line, temp);
            }

            //If we found the variable in the file
            if (strcmp(Line, Variable) == 0)
            {
                  //We copy everything after the file (and have a chance to be overwritten)
                  char rest[10000];
                  bzero(rest, 10000);
                  pread(File_ptr, rest, 10000, lseek(File_ptr,0,SEEK_CUR));

                  //We create the new line
                  lseek(File_ptr, -inapoi, SEEK_CUR);
                  char temp[50];
                  strcpy(temp, Line);
                  snprintf(Line,100,"%s = %c %s",temp, valoareCara, scope);

                  //We overwrite
                  write(File_ptr, Line, strlen(Line));
                  write(File_ptr,"\n",1);
                  write(File_ptr, rest, strlen(rest));
                  return 0;
            }
      }
}

int changeBoolValue(char *VarType, char *Identifier, char *valoareBool)
{
      char Line[100]="";
      char c;
      char scope[10];
      int Index = 0;
      int Found=0;

      char Variable[100];
      strcpy(Variable, VarType);
      strcat(Variable, " ");
      strcat(Variable, Identifier);      

      //Read the variables file
      lseek(File_ptr, 0, SEEK_SET);
      while(1)
      {
            bzero(Line, 100);
            Index = 0;
            //Read a line
            while(1)
            {
                  int r = read(File_ptr, &c, 1);
                  if( r == 0 || c == '\n')
                        break;     
                  Line[Index++] = (char )c;                   
            }

            //We've finished reading
            if (Index == 0)
                  break;

            //We need to know how far we have to go back
            int inapoi= strlen(Line) + 1;
            
            //Remove the local/global part
            if(strstr(Line,"local"))
                  {Line[strlen(Line) - 6] = '\0'; strcpy(scope,"local");}     
            else if(strstr(Line, "global"))  
                  {Line[strlen(Line) - 7] = '\0'; strcpy(scope,"global");}

            //Ww remove the "="
            if( strstr(Line, "="))
            {
                  char *temp = strtok(Line, "=");
                  temp[strlen(temp) - 1] = '\0';
                  strcpy(Line, temp);
            }

            //If we found the variable in the file
            if (strcmp(Line, Variable) == 0)
            {
                  //We copy everything after the file (and have a chance to be overwritten)
                  char rest[10000];
                  bzero(rest, 10000);
                  pread(File_ptr, rest, 10000, lseek(File_ptr,0,SEEK_CUR));

                  //We create the new line
                  lseek(File_ptr, -inapoi, SEEK_CUR);
                  char temp[50];
                  strcpy(temp, Line);
                  snprintf(Line,100,"%s = %s %s",temp, valoareBool, scope);

                  //We overwrite
                  write(File_ptr, Line, strlen(Line));
                  write(File_ptr,"\n",1);
                  write(File_ptr, rest, strlen(rest));
                  return 0;
            }
      }
}


int SearchVal(char *Identifier)
{
      char Line[100]="";
      char  c;
      char copy[100];
      int Index = 0;

      char Variable[100];
      strcpy(Variable, "Int ");
      strcat(Variable, Identifier);      

      //Read the variables file
      lseek(File_ptr, 0, SEEK_SET);
      while(1)
      {
            bzero(Line, 100);
            Index = 0;
            //Read a line
            while(1)
            {
                  int r = read(File_ptr, &c, 1);
                  if( r == 0 || c == '\n')
                        break;     
                  Line[Index++] = (char )c;                   
            }

            //We've finished reading
            if (Index == 0)
                  break;
            
            //We make a copy of the line
            strcpy(copy, Line);

            //Remove the local/global part
            if(strstr(Line,"local"))
                  Line[strlen(Line) - 6] = '\0';      
            else if(strstr(Line, "global"))  
                  Line[strlen(Line) - 7] = '\0';   
            else Line[strlen(Line) - 2] = '\0';

            //We remove the "="
            if(strstr(Line,"="))
            {
                  char *temp = strtok(Line, "=");
                  temp[strlen(temp) - 1] = '\0';
                  strcpy(Line, temp);
            }

            //We compare the line with the variable
            if (strcmp(Line, Variable) == 0)
            {
                  strtok(copy, "=");
                  char *valoare = strtok(NULL, " ");
                  return atoi(valoare);
            }
      }
      return 0;
}

int main(int argc, char** argv)
{
      File_ptr = open ("symbol_table.txt", O_CREAT | O_RDWR | O_TRUNC);
      yyin = fopen(argv[1],"r");
      yyparse();
}
