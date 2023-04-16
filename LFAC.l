%{
#include <stdio.h>
#include "y.tab.h"
%}
%option noyywrap
%%
"Eval" {return Eval;}
"Int" {return CInt;}
"Float" {return CFloat;}
"Char" {return CChar;}
"String" {return CString;}
"Bool" {return CBool;}
"Struct" {return CStruct;}
"Array" {return CArray;}
"main" {return MainFunction;}
"If" {return CIf;}
"Else" {return CElse;}
"For" {return CFor;}
"While" {return CWhile;}
"Do" {return CDoWhile;}
"StrCmp" {return StrCmp;}
"Function" {return CFunction;}
"Def" {return CDefine;}
"<"|">"|"=="|">="|"<=" {return CCmp;}

("false")|("true") {yylval.BoolVal=strdup(yytext); return Bool_Val;}
[a-zA-Z][a-zA-Z0-9]* {yylval.VarName=strdup(yytext); return Identif;}
-?([1-9][0-9]*|0) {yylval.IntVal=atoi(yytext); return Int_Val;}
-?([1-9][0-9]*|0)\.([0-9]*) {yylval.FloatVal=atof(yytext); return Float_Val;}
\'[^ \']\' {yylval.CharVal=yytext[1]; return Char_Val;}
\"[^ \"]*\" {yylval.StringVal=strdup(yytext); return String_Val;}
"//"[^\n\r]* ;
[ \t\r] ;
\n {yylineno++;}
. {return yytext[0];}
