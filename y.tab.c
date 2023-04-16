/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "LFAC.y" /* yacc.c:339  */

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

#line 104 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    MainFunction = 258,
    CInt = 259,
    CFloat = 260,
    CChar = 261,
    CString = 262,
    CBool = 263,
    CStruct = 264,
    CArray = 265,
    CFunction = 266,
    CDefine = 267,
    CIf = 268,
    CElse = 269,
    CFor = 270,
    CWhile = 271,
    CDoWhile = 272,
    CCmp = 273,
    Eval = 274,
    CCopy = 275,
    StrCmp = 276,
    Concat = 277,
    Int_Val = 278,
    Float_Val = 279,
    Char_Val = 280,
    String_Val = 281,
    Bool_Val = 282,
    Identif = 283
  };
#endif
/* Tokens.  */
#define MainFunction 258
#define CInt 259
#define CFloat 260
#define CChar 261
#define CString 262
#define CBool 263
#define CStruct 264
#define CArray 265
#define CFunction 266
#define CDefine 267
#define CIf 268
#define CElse 269
#define CFor 270
#define CWhile 271
#define CDoWhile 272
#define CCmp 273
#define Eval 274
#define CCopy 275
#define StrCmp 276
#define Concat 277
#define Int_Val 278
#define Float_Val 279
#define Char_Val 280
#define String_Val 281
#define Bool_Val 282
#define Identif 283

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 40 "LFAC.y" /* yacc.c:355  */

int IntVal;
float FloatVal;
char* BoolVal;
char CharVal;
char* StringVal;
char* VarName;
char* VarType;

#line 210 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 227 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  36
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   465

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  116
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  265

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   283

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      36,    37,    31,    29,    40,    30,     2,    32,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    41,
       2,    33,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    38,     2,    39,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    34,     2,    35,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    78,    78,    91,    92,    93,    96,    97,   100,   101,
     102,   103,   104,   105,   108,   109,   112,   113,   114,   117,
     123,   129,   135,   141,   149,   155,   161,   167,   173,   181,
     182,   185,   186,   187,   188,   191,   195,   194,   202,   203,
     206,   207,   208,   212,   211,   219,   218,   227,   233,   239,
     245,   251,   258,   260,   266,   272,   278,   284,   290,   296,
     302,   311,   312,   315,   316,   320,   321,   322,   332,   331,
     337,   359,   361,   371,   382,   392,   402,   412,   422,   432,
     433,   434,   435,   436,   440,   461,   464,   469,   473,   474,
     476,   477,   479,   480,   481,   482,   486,   487,   489,   490,
     491,   492,   493,   494,   495,   500,   502,   503,   507,   509,
     510,   514,   516,   517,   521,   523,   524
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "MainFunction", "CInt", "CFloat",
  "CChar", "CString", "CBool", "CStruct", "CArray", "CFunction", "CDefine",
  "CIf", "CElse", "CFor", "CWhile", "CDoWhile", "CCmp", "Eval", "CCopy",
  "StrCmp", "Concat", "Int_Val", "Float_Val", "Char_Val", "String_Val",
  "Bool_Val", "Identif", "'+'", "'-'", "'*'", "'/'", "'='", "'{'", "'}'",
  "'('", "')'", "'['", "']'", "','", "';'", "$accept", "S", "Base_Program",
  "Global_Declarations", "Global_Declaration", "Declarations",
  "Declaation", "Variable", "Assign_Declaring", "Struct_Declarations",
  "Struct_Declaration", "Object", "struct", "$@1", "Function_Declarations",
  "Function_Declaation", "Function", "$@2", "$@3", "definitie",
  "String_Value", "array", "Main_Program", "Code", "Code_Part", "$@4",
  "Int_Operations", "Int_Operation", "Function_Parameters",
  "Interogations", "Interogation", "Condition", "Loops", "Loop",
  "Int_Value", "List_Int", "Float_Value", "List_Float", "Char_Value",
  "List_Char", "Bool_Value", "List_Bool", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,    43,
      45,    42,    47,    61,   123,   125,    40,    41,    91,    93,
      44,    59
};
# endif

#define YYPACT_NINF -152

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-152)))

#define YYTABLE_NINF -85

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     382,   -24,    -7,     6,    60,    70,    76,    82,    95,    98,
     109,    51,  -152,   382,  -152,  -152,  -152,  -152,  -152,  -152,
    -152,  -152,  -152,   118,    34,   120,   126,   142,   162,  -152,
     172,   176,   178,   184,   179,   116,  -152,  -152,   391,   183,
     200,   205,   207,   208,   213,   212,   211,   219,   225,   228,
      12,  -152,  -152,  -152,  -152,  -152,   391,   141,  -152,  -152,
    -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,   173,   245,
     251,   257,   260,  -152,    23,  -152,  -152,  -152,  -152,   215,
     406,   249,   263,   255,    14,  -152,   372,   186,  -152,   287,
    -152,    77,  -152,  -152,  -152,    67,  -152,  -152,  -152,   269,
     275,   278,   280,   268,  -152,  -152,    24,   297,   303,   306,
     308,   314,   307,    24,   356,    38,   381,   316,  -152,  -152,
    -152,  -152,  -152,  -152,   318,   326,   332,   335,   372,   336,
     345,   365,   383,    34,   120,   126,   142,   162,    18,   384,
     203,  -152,  -152,    52,  -152,  -152,    83,  -152,    88,  -152,
    -152,  -152,  -152,  -152,   394,   385,   386,   387,   388,  -152,
    -152,   101,  -152,  -152,   372,   399,    63,   395,   389,   390,
     392,   393,   398,   403,    38,    38,    38,    38,  -152,  -152,
      39,   -14,   -13,    -2,     5,  -152,  -152,   117,   396,  -152,
    -152,  -152,   356,   405,   412,   413,    30,   356,   402,   136,
     136,  -152,  -152,  -152,   411,  -152,  -152,   146,  -152,  -152,
     158,  -152,  -152,   376,  -152,  -152,   378,  -152,   414,   220,
     407,   409,   410,   415,   416,   237,    24,  -152,  -152,   417,
    -152,   421,  -152,   422,  -152,   419,   418,   434,   356,   356,
     356,   356,   356,  -152,   420,  -152,  -152,  -152,  -152,  -152,
     424,   254,   271,   288,   305,   322,  -152,   356,  -152,  -152,
    -152,  -152,  -152,   339,  -152
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,     0,     7,     8,     9,    11,    35,    13,
      12,    10,     3,     0,    19,    21,    20,    22,    23,    36,
       0,     0,     0,     0,     0,     0,     1,     6,     4,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    47,    49,    50,    48,    51,     5,     0,   105,    24,
     108,    25,   111,    28,    52,    26,   114,    27,     0,     0,
       0,     0,     0,    43,     0,    15,    16,    17,    18,     0,
       0,     0,     0,     0,     0,    61,    71,     0,    64,    65,
      89,    66,    97,    31,    32,     0,    30,    34,    33,     0,
       0,     0,     0,     0,    45,    14,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    68,    62,    63,
      88,    96,    37,    29,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    85,    84,     0,    79,    85,    70,    74,    77,    72,
      73,    75,    76,    67,     0,     0,     0,     0,     0,    40,
      41,     0,    39,    42,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    78,    87,
       0,     0,     0,     0,     0,    44,    38,     0,     0,    93,
      94,    92,     0,     0,     0,     0,     0,     0,     0,    80,
      81,    82,    83,    69,     0,   106,    54,     0,   109,    56,
       0,   112,    58,     0,   115,    60,     0,    46,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    86,    53,     0,
      55,     0,    57,     0,    59,     0,     0,    90,     0,     0,
       0,     0,     0,   103,     0,   107,   110,   113,   116,    95,
       0,     0,     0,     0,     0,     0,   104,     0,   100,    99,
     101,    98,   102,     0,    91
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -152,  -152,  -152,   423,    -8,   401,   -31,     1,     0,  -152,
     357,  -152,  -152,  -152,   289,  -151,   -60,  -152,  -152,  -152,
     338,     2,   443,  -107,   -81,  -152,  -112,  -152,  -152,  -152,
     370,  -110,  -152,   369,   346,  -152,   347,  -152,   348,  -152,
     349,  -152
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    12,    13,    14,    86,    75,    76,    77,    95,
      96,    17,    18,    45,   161,   162,    19,   103,   129,    20,
      65,    78,    22,    87,    88,   154,   143,   144,   180,    89,
      90,   132,    91,    92,    59,   207,    61,   210,    63,   213,
      67,   216
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      16,    15,    21,   139,   148,    37,   119,   140,    97,   205,
     186,   208,    23,    16,    15,    21,     2,     3,     4,     5,
       6,    24,     8,   211,   168,   206,   209,     2,     3,     4,
       5,     6,   214,     8,    25,    97,   186,   212,    16,    15,
      21,   169,   170,   105,   215,   130,   171,   116,    37,    73,
     117,    36,   131,   223,   224,   105,    16,    15,    21,   119,
     104,   141,   199,   200,   201,   202,   142,    40,    94,    93,
      98,     2,     3,     4,     5,     6,   203,     8,     9,   204,
     112,   174,   175,   176,   177,   219,   189,   190,    26,   178,
     225,   191,    80,    81,    82,    94,    93,    98,    27,    30,
      31,    32,   122,    33,    28,     2,     3,     4,     5,     6,
      29,     8,   -84,   -84,   -84,   -84,   244,   174,   175,   176,
     177,     2,     3,     4,     5,     6,    34,     8,   160,   159,
     163,   251,   252,   253,   254,   255,   185,    35,   119,    51,
      52,    53,    54,    55,   119,     2,     3,     4,     5,     6,
     263,     8,   217,    41,    79,    39,    80,    81,    82,    42,
      83,   160,   159,   163,   160,   159,   163,   176,   177,    84,
     119,   119,   119,   119,   119,    43,    85,     2,     3,     4,
       5,     6,   119,     8,     9,   228,   229,   160,   159,   163,
       2,     3,     4,     5,     6,    44,     8,   230,   231,    79,
      46,    80,    81,    82,    47,    83,    48,     2,     3,     4,
       5,     6,    49,     8,    84,    50,    79,    57,    80,    81,
      82,   118,    83,    58,     2,     3,     4,     5,     6,    60,
       8,    84,    62,    79,    64,    80,    81,    82,   173,    83,
      66,     2,     3,     4,     5,     6,    68,     8,    84,    69,
      79,   106,    80,    81,    82,   237,    83,    70,     2,     3,
       4,     5,     6,    71,     8,    84,    72,    79,    99,    80,
      81,    82,   243,    83,   100,     2,     3,     4,     5,     6,
     101,     8,    84,   102,    79,   113,    80,    81,    82,   258,
      83,   115,     2,     3,     4,     5,     6,   114,     8,    84,
      79,    79,   128,    80,    81,    82,   259,    83,   124,     2,
       3,     4,     5,     6,   125,     8,    84,   126,    79,   127,
      80,    81,    82,   260,    83,   133,     2,     3,     4,     5,
       6,   134,     8,    84,   135,    79,   136,    80,    81,    82,
     261,    83,   137,     2,     3,     4,     5,     6,   138,     8,
      84,   155,    79,   153,    80,    81,    82,   262,    83,   156,
       2,     3,     4,     5,     6,   157,     8,    84,   158,    79,
     164,    80,    81,    82,   264,    83,     2,     3,     4,     5,
       6,   165,     8,   166,    84,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,     2,     3,     4,     5,     6,
       7,     8,     9,    10,   145,    60,    62,    64,    66,   146,
     107,   108,   109,   110,   111,   232,   233,   234,   235,   198,
     167,   172,   179,   181,   182,   183,   184,   188,   220,   192,
     193,   194,   197,   195,   196,   221,   218,   222,   226,   227,
     245,   238,   236,   239,   240,   246,   248,   247,   250,   241,
     242,    74,   123,   187,   147,   249,    38,   256,   257,   120,
     121,    56,   149,   150,   151,   152
};

static const yytype_uint16 yycheck[] =
{
       0,     0,     0,   113,   116,    13,    87,   114,    68,    23,
     161,    24,    36,    13,    13,    13,     4,     5,     6,     7,
       8,    28,    10,    25,     6,    39,    39,     4,     5,     6,
       7,     8,    27,    10,    28,    95,   187,    39,    38,    38,
      38,    23,    24,    74,    39,    21,    28,    33,    56,    37,
      36,     0,    28,    23,    24,    86,    56,    56,    56,   140,
      37,    23,   174,   175,   176,   177,    28,    33,    68,    68,
      68,     4,     5,     6,     7,     8,    37,    10,    11,    40,
      80,    29,    30,    31,    32,   192,    23,    24,    28,    37,
     197,    28,    15,    16,    17,    95,    95,    95,    28,     4,
       5,     6,    35,     8,    28,     4,     5,     6,     7,     8,
      28,    10,    29,    30,    31,    32,   226,    29,    30,    31,
      32,     4,     5,     6,     7,     8,    28,    10,   128,   128,
     128,   238,   239,   240,   241,   242,    35,    28,   219,    23,
      24,    25,    26,    27,   225,     4,     5,     6,     7,     8,
     257,    10,    35,    33,    13,    37,    15,    16,    17,    33,
      19,   161,   161,   161,   164,   164,   164,    31,    32,    28,
     251,   252,   253,   254,   255,    33,    35,     4,     5,     6,
       7,     8,   263,    10,    11,    39,    40,   187,   187,   187,
       4,     5,     6,     7,     8,    33,    10,    39,    40,    13,
      28,    15,    16,    17,    28,    19,    28,     4,     5,     6,
       7,     8,    28,    10,    28,    36,    13,    34,    15,    16,
      17,    35,    19,    23,     4,     5,     6,     7,     8,    24,
      10,    28,    25,    13,    26,    15,    16,    17,    35,    19,
      27,     4,     5,     6,     7,     8,    34,    10,    28,    38,
      13,    36,    15,    16,    17,    35,    19,    38,     4,     5,
       6,     7,     8,    38,    10,    28,    38,    13,    23,    15,
      16,    17,    35,    19,    23,     4,     5,     6,     7,     8,
      23,    10,    28,    23,    13,    36,    15,    16,    17,    35,
      19,    36,     4,     5,     6,     7,     8,    34,    10,    28,
      13,    13,    34,    15,    16,    17,    35,    19,    39,     4,
       5,     6,     7,     8,    39,    10,    28,    39,    13,    39,
      15,    16,    17,    35,    19,    28,     4,     5,     6,     7,
       8,    28,    10,    28,    28,    13,    28,    15,    16,    17,
      35,    19,    28,     4,     5,     6,     7,     8,    41,    10,
      28,    33,    13,    37,    15,    16,    17,    35,    19,    33,
       4,     5,     6,     7,     8,    33,    10,    28,    33,    13,
      34,    15,    16,    17,    35,    19,     4,     5,     6,     7,
       8,    36,    10,    18,    28,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    23,    24,    25,    26,    27,    28,
       4,     5,     6,     7,     8,    39,    40,    39,    40,    16,
      37,    37,    28,    38,    38,    38,    38,    28,    23,    34,
      41,    41,    34,    41,    41,    23,    40,    24,    36,    28,
      23,    34,    28,    34,    34,    24,    27,    25,    14,    34,
      34,    50,    95,   164,   116,    37,    13,    37,    34,    89,
      91,    38,   116,   116,   116,   116
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    43,    44,    45,    46,    49,    50,    53,    54,    58,
      61,    63,    64,    36,    28,    28,    28,    28,    28,    28,
       4,     5,     6,     8,    28,    28,     0,    46,    64,    37,
      33,    33,    33,    33,    33,    55,    28,    28,    28,    28,
      36,    23,    24,    25,    26,    27,    45,    34,    23,    76,
      24,    78,    25,    80,    26,    62,    27,    82,    34,    38,
      38,    38,    38,    37,    47,    48,    49,    50,    63,    13,
      15,    16,    17,    19,    28,    35,    47,    65,    66,    71,
      72,    74,    75,    49,    50,    51,    52,    58,    63,    23,
      23,    23,    23,    59,    37,    48,    36,     4,     5,     6,
       7,     8,    50,    36,    34,    36,    33,    36,    35,    66,
      72,    75,    35,    52,    39,    39,    39,    39,    34,    60,
      21,    28,    73,    28,    28,    28,    28,    28,    41,    73,
      65,    23,    28,    68,    69,    23,    28,    62,    68,    76,
      78,    80,    82,    37,    67,    33,    33,    33,    33,    49,
      50,    56,    57,    63,    34,    36,    18,    37,     6,    23,
      24,    28,    37,    35,    29,    30,    31,    32,    37,    28,
      70,    38,    38,    38,    38,    35,    57,    56,    28,    23,
      24,    28,    34,    41,    41,    41,    41,    34,    16,    68,
      68,    68,    68,    37,    40,    23,    39,    77,    24,    39,
      79,    25,    39,    81,    27,    39,    83,    35,    40,    65,
      23,    23,    24,    23,    24,    65,    36,    28,    39,    40,
      39,    40,    39,    40,    39,    40,    28,    35,    34,    34,
      34,    34,    34,    35,    73,    23,    24,    25,    27,    37,
      14,    65,    65,    65,    65,    65,    37,    34,    35,    35,
      35,    35,    35,    65,    35
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    42,    43,    44,    44,    44,    45,    45,    46,    46,
      46,    46,    46,    46,    47,    47,    48,    48,    48,    49,
      49,    49,    49,    49,    50,    50,    50,    50,    50,    51,
      51,    52,    52,    52,    52,    53,    55,    54,    56,    56,
      57,    57,    57,    59,    58,    60,    58,    61,    61,    61,
      61,    61,    62,    63,    63,    63,    63,    63,    63,    63,
      63,    64,    64,    65,    65,    66,    66,    66,    67,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    68,
      68,    68,    68,    68,    69,    69,    70,    70,    71,    71,
      72,    72,    73,    73,    73,    73,    74,    74,    75,    75,
      75,    75,    75,    75,    75,    76,    77,    77,    78,    79,
      79,    80,    81,    81,    82,    83,    83
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     3,     2,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     1,     1,     2,
       2,     2,     2,     2,     4,     4,     4,     4,     4,     2,
       1,     1,     1,     1,     1,     1,     0,     6,     2,     1,
       1,     1,     1,     0,     8,     0,     9,     3,     3,     3,
       3,     3,     1,    10,     9,    10,     9,    10,     9,    10,
       9,     5,     6,     2,     1,     1,     1,     3,     0,     5,
       3,     1,     3,     3,     3,     3,     3,     3,     4,     1,
       3,     3,     3,     3,     1,     1,     3,     1,     2,     1,
       7,    11,     3,     3,     3,     6,     2,     1,     9,     9,
       9,     9,     9,     7,     8,     1,     1,     3,     1,     1,
       3,     1,     1,     3,     1,     1,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 79 "LFAC.y" /* yacc.c:1646  */
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
#line 1532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 100 "LFAC.y" /* yacc.c:1646  */
    {write(File_ptr, "Global\n", strlen("Global\n")); }
#line 1538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 101 "LFAC.y" /* yacc.c:1646  */
    {write(File_ptr, "Global\n", strlen("Global\n")); }
#line 1544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 102 "LFAC.y" /* yacc.c:1646  */
    {write(File_ptr, "Global\n", strlen("Global\n")); }
#line 1550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 104 "LFAC.y" /* yacc.c:1646  */
    {write(File_ptr, "Definition\n", strlen("Definition\n")); }
#line 1556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 112 "LFAC.y" /* yacc.c:1646  */
    {write(File_ptr, "Local\n", strlen("Local\n"));}
#line 1562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 113 "LFAC.y" /* yacc.c:1646  */
    {write(File_ptr, "Local\n", strlen("Local\n"));}
#line 1568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 114 "LFAC.y" /* yacc.c:1646  */
    {write(File_ptr, "Local\n", strlen("Local\n"));}
#line 1574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 118 "LFAC.y" /* yacc.c:1646  */
    { 
                  if(SearchVarName((yyvsp[0].VarName))) Logical_Works = 0; 
                  snprintf(Buffer, 100, "Int %s ", (yyvsp[0].VarName)); 
                  write(File_ptr, Buffer, strlen(Buffer)); 
            }
#line 1584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 124 "LFAC.y" /* yacc.c:1646  */
    { 
                  if(SearchVarName((yyvsp[0].VarName))) Logical_Works = 0;
                  snprintf(Buffer, 100, "Char %s = . ", (yyvsp[0].VarName)); 
                  write(File_ptr, Buffer, strlen(Buffer)); 
            }
#line 1594 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 130 "LFAC.y" /* yacc.c:1646  */
    { 
                  if(SearchVarName((yyvsp[0].VarName))) Logical_Works = 0; 
                  snprintf(Buffer, 100, "Float %s = 0.00 ", (yyvsp[0].VarName)); 
                  write(File_ptr, Buffer, strlen(Buffer)); 
            }
#line 1604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 136 "LFAC.y" /* yacc.c:1646  */
    { 
                  if(SearchVarName((yyvsp[0].VarName))) Logical_Works = 0; 
                  snprintf(Buffer, 100, "String %s = \"\" ", (yyvsp[0].VarName)); 
                  write(File_ptr, Buffer, strlen(Buffer)); 
            }
#line 1614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 142 "LFAC.y" /* yacc.c:1646  */
    { 
                  if(SearchVarName((yyvsp[0].VarName))) Logical_Works = 0; 
                  snprintf(Buffer, 100, "Bool %s = true ", (yyvsp[0].VarName)); 
                  write(File_ptr, Buffer, strlen(Buffer)); 
            }
#line 1624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 150 "LFAC.y" /* yacc.c:1646  */
    { 
                              if(SearchVarName((yyvsp[-2].VarName))) Logical_Works = 0; 
                              snprintf(Buffer, 100, "Int %s = %d ", (yyvsp[-2].VarName), (yyvsp[0].IntVal)); 
                              write(File_ptr, Buffer, strlen(Buffer)); 
                        }
#line 1634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 156 "LFAC.y" /* yacc.c:1646  */
    { 
                              if(SearchVarName((yyvsp[-2].VarName))) Logical_Works = 0; 
                              snprintf(Buffer, 100, "Float %s = %.3f ", (yyvsp[-2].VarName), (yyvsp[0].FloatVal)); 
                              write(File_ptr, Buffer, strlen(Buffer)); 
                        }
#line 1644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 162 "LFAC.y" /* yacc.c:1646  */
    {
                              if(SearchVarName((yyvsp[-2].VarName))) Logical_Works = 0; 
                              snprintf(Buffer, 100, "String %s = %s ", (yyvsp[-2].VarName), (yyvsp[0].StringVal)); 
                              write(File_ptr, Buffer, strlen(Buffer)); 
                        }
#line 1654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 168 "LFAC.y" /* yacc.c:1646  */
    { 
                              if(SearchVarName((yyvsp[-2].VarName))) Logical_Works = 0; 
                              snprintf(Buffer, 100, "Bool %s = %s ", (yyvsp[-2].VarName), (yyvsp[0].BoolVal)); 
                              write(File_ptr, Buffer, strlen(Buffer)); 
                        }
#line 1664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 174 "LFAC.y" /* yacc.c:1646  */
    { 
                              if(SearchVarName((yyvsp[-2].VarName))) Logical_Works = 0; 
                              snprintf(Buffer, 100, "Char %s = %c ", (yyvsp[-2].VarName), (yyvsp[0].CharVal)); 
                              write(File_ptr, Buffer, strlen(Buffer)); 
                        }
#line 1674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 185 "LFAC.y" /* yacc.c:1646  */
    {write(File_ptr, "Struct\n", strlen("Struct\n")); }
#line 1680 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 186 "LFAC.y" /* yacc.c:1646  */
    {write(File_ptr, "Struct\n", strlen("Struct\n")); }
#line 1686 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 187 "LFAC.y" /* yacc.c:1646  */
    {write(File_ptr, "Struct\n", strlen("Struct\n")); }
#line 1692 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 195 "LFAC.y" /* yacc.c:1646  */
    { 
                  if(SearchVarName((yyvsp[0].VarName))) Logical_Works = 0; 
                  snprintf(Buffer, 100, "Struct %s Construct\n", (yyvsp[0].VarName)); 
                  write(File_ptr, Buffer, strlen(Buffer)); 
            }
#line 1702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 206 "LFAC.y" /* yacc.c:1646  */
    {write(File_ptr, "InFunction\n", strlen("InFunction\n"));}
#line 1708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 207 "LFAC.y" /* yacc.c:1646  */
    {write(File_ptr, "InFunction\n", strlen("InFunction\n"));}
#line 1714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 208 "LFAC.y" /* yacc.c:1646  */
    {write(File_ptr, "InFunction\n", strlen("InFunction\n"));}
#line 1720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 212 "LFAC.y" /* yacc.c:1646  */
    {
                  if(SearchVarName((yyvsp[-2].VarName)) == 1) Logical_Works = 0;
                  snprintf(Buffer, 100,"Function %s Construct \n", (yyvsp[-2].VarName)); 
                  write(File_ptr, Buffer, strlen(Buffer));
            }
#line 1730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 219 "LFAC.y" /* yacc.c:1646  */
    {
                  if(SearchVarName((yyvsp[-3].VarName)) == 1) 
                        Logical_Works = 0;
                  snprintf(Buffer, 100,"functie %s: \n", (yyvsp[-3].VarName)); 
                  write(File_ptr, Buffer, strlen(Buffer));
            }
#line 1741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 228 "LFAC.y" /* yacc.c:1646  */
    { 
                        if(SearchVarName((yyvsp[-1].VarName))) Logical_Works = 0; 
                        snprintf(Buffer, 100, "Int %s = %d ", (yyvsp[-1].VarName), (yyvsp[0].IntVal)); 
                        write(File_ptr, Buffer, strlen(Buffer)); 
                  }
#line 1751 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 234 "LFAC.y" /* yacc.c:1646  */
    {
                        if(SearchVarName((yyvsp[-1].VarName))) Logical_Works = 0; 
                        snprintf(Buffer, 100, "String %s = %s ", (yyvsp[-1].VarName), (yyvsp[0].StringVal)); 
                        write(File_ptr, Buffer, strlen(Buffer)); 
                  }
#line 1761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 240 "LFAC.y" /* yacc.c:1646  */
    { 
                        if(SearchVarName((yyvsp[-1].VarName))) Logical_Works = 0; 
                        snprintf(Buffer, 100, "Float %s = %.3f ", (yyvsp[-1].VarName), (yyvsp[0].FloatVal)); 
                        write(File_ptr, Buffer, strlen(Buffer)); 
                  }
#line 1771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 246 "LFAC.y" /* yacc.c:1646  */
    { 
                        if(SearchVarName((yyvsp[-1].VarName))) Logical_Works = 0; 
                        snprintf(Buffer, 100, "Char %s = %c ", (yyvsp[-1].VarName), (yyvsp[0].CharVal)); 
                        write(File_ptr, Buffer, strlen(Buffer)); 
                  }
#line 1781 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 252 "LFAC.y" /* yacc.c:1646  */
    { 
                        if(SearchVarName((yyvsp[-1].VarName))) Logical_Works = 0; 
                        snprintf(Buffer, 100, "Bool %s = %s ", (yyvsp[-1].VarName), (yyvsp[0].BoolVal)); 
                        write(File_ptr, Buffer, strlen(Buffer)); 
                  }
#line 1791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 258 "LFAC.y" /* yacc.c:1646  */
    {(yyval.StringVal)=(yyvsp[0].StringVal);}
#line 1797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 261 "LFAC.y" /* yacc.c:1646  */
    { 
                        if(SearchVarName((yyvsp[-7].VarName))) Logical_Works = 0; 
                        snprintf(Buffer, 100, "CArray %s ", (yyvsp[-7].VarName)); 
                        write(File_ptr, Buffer, strlen(Buffer)); 
                  }
#line 1807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 267 "LFAC.y" /* yacc.c:1646  */
    { 
                        if(SearchVarName((yyvsp[-6].VarName))) Logical_Works = 0; 
                        snprintf(Buffer, 100, "CArray %s ", (yyvsp[-6].VarName)); 
                        write(File_ptr, Buffer, strlen(Buffer)); 
                  }
#line 1817 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 273 "LFAC.y" /* yacc.c:1646  */
    { 
                        if(SearchVarName((yyvsp[-7].VarName))) Logical_Works = 0; 
                        snprintf(Buffer, 100, "CArray %s ", (yyvsp[-7].VarName)); 
                        write(File_ptr, Buffer, strlen(Buffer)); 
                  }
#line 1827 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 279 "LFAC.y" /* yacc.c:1646  */
    { 
                        if(SearchVarName((yyvsp[-6].VarName))) Logical_Works = 0; 
                        snprintf(Buffer, 100, "CArray %s ", (yyvsp[-6].VarName)); 
                        write(File_ptr, Buffer, strlen(Buffer)); 
                  }
#line 1837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 285 "LFAC.y" /* yacc.c:1646  */
    { 
                        if(SearchVarName((yyvsp[-7].VarName))) Logical_Works = 0; 
                        snprintf(Buffer, 100, "CArray %s ", (yyvsp[-7].VarName)); 
                        write(File_ptr, Buffer, strlen(Buffer)); 
                  }
#line 1847 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 291 "LFAC.y" /* yacc.c:1646  */
    { 
                        if(SearchVarName((yyvsp[-6].VarName))) Logical_Works = 0; 
                        snprintf(Buffer, 100, "CArray %s ", (yyvsp[-6].VarName));
                        write(File_ptr, Buffer, strlen(Buffer)); 
                  }
#line 1857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 297 "LFAC.y" /* yacc.c:1646  */
    { 
                        if(SearchVarName((yyvsp[-7].VarName))) Logical_Works = 0; 
                        snprintf(Buffer, 100, "CArray %s ", (yyvsp[-7].VarName)); 
                        write(File_ptr, Buffer, strlen(Buffer)); 
                  }
#line 1867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 303 "LFAC.y" /* yacc.c:1646  */
    { 
                        if(SearchVarName((yyvsp[-6].VarName))) Logical_Works = 0; 
                        snprintf(Buffer, 100, "CArray %s ", (yyvsp[-6].VarName)); 
                        write(File_ptr, Buffer, strlen(Buffer)); 
                  }
#line 1877 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 323 "LFAC.y" /* yacc.c:1646  */
    {
                        if(Search("Function",(yyvsp[-2].VarName)) == 0) 
                        {
                              printf("the function %s wasn't declared \n", (yyvsp[-2].VarName)); 
                              Logical_Works = 0;
                        }
                  }
#line 1889 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 332 "LFAC.y" /* yacc.c:1646  */
    {
                        Parameter_NR=0; 
                        strcpy(Function_Name,(yyvsp[-1].VarName));
                  }
#line 1898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 338 "LFAC.y" /* yacc.c:1646  */
    {
                        char *tip1 = GetType((yyvsp[-2].VarName));  
                        if(tip1 == NULL) 
                              { 
                                    printf("the variable %s is uninitialized\n", (yyvsp[-2].VarName)); 
                                    Logical_Works = 0;
                              }
                        char *tip2 = GetType((yyvsp[0].VarName));  
                        if(tip2 == NULL) 
                              { 
                                    printf("the variable %s is uninitialized \n", (yyvsp[0].VarName)); 
                                    Logical_Works = 0; 
                              }
                        if(tip1 && tip2 && strcmp(tip1,tip2) != 0) 
                              {
                                    printf("the variables %s and %s are not of the same type \n", (yyvsp[-2].VarName), (yyvsp[0].VarName)); 
                                    Logical_Works = 0;
                              }
                        printf("|%s| = |%d|, |%s| = |%d|\n", tip1, SearchVal((yyvsp[-2].VarName)),tip2,SearchVal((yyvsp[0].VarName)));
                  }
#line 1923 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 362 "LFAC.y" /* yacc.c:1646  */
    {
                        if(Search("Int", (yyvsp[-2].VarName)) == 0) 
                              {
                                    Logical_Works = 0; 
                                    printf("variable %s error \n", (yyvsp[-2].VarName));
                              } 
                        changeNatValue("Int", (yyvsp[-2].VarName), (yyvsp[0].IntVal));
                  }
#line 1936 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 372 "LFAC.y" /* yacc.c:1646  */
    {
                        if(Search("Float", (yyvsp[-2].VarName)) == 0) 
                        {
                              Logical_Works = 0; 
                              printf("variable %s error \n", (yyvsp[-2].VarName));
                        }
                        changeRealValue("Float", (yyvsp[-2].VarName), (yyvsp[0].FloatVal));

                  }
#line 1950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 383 "LFAC.y" /* yacc.c:1646  */
    { 
                        if(Search("String", (yyvsp[-2].VarName)) == 0)
                              {
                                    Logical_Works = 0; 
                                    printf("variable %s error \n", (yyvsp[-2].VarName));
                              } 
                        changeStrValue("String", (yyvsp[-2].VarName), (yyvsp[0].StringVal));
                  }
#line 1963 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 393 "LFAC.y" /* yacc.c:1646  */
    { 
                        if(Search("Char", (yyvsp[-2].VarName)) == 0) 
                              {
                                    Logical_Works = 0; 
                                    printf("variable %s error \n", (yyvsp[-2].VarName));
                              } 
                        changeCharValue("Char", (yyvsp[-2].VarName), (yyvsp[0].CharVal));
                  }
#line 1976 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 403 "LFAC.y" /* yacc.c:1646  */
    { 
                        if(Search("Bool", (yyvsp[-2].VarName)) == 0) 
                              {
                                    Logical_Works = 0;
                                    printf("variable %s error \n", (yyvsp[-2].VarName));
                              }
                        changeBoolValue("Bool", (yyvsp[-2].VarName), (yyvsp[0].BoolVal));
                  }
#line 1989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 413 "LFAC.y" /* yacc.c:1646  */
    { 
                        if(Search("Int", (yyvsp[-2].VarName)) == 0) 
                              {
                                    Logical_Works = 0;
                                    printf("variable %s error \n", (yyvsp[-2].VarName));
                              } 
                        changeNatValue("Int", (yyvsp[-2].VarName), (yyvsp[0].IntVal));
                  }
#line 2002 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 423 "LFAC.y" /* yacc.c:1646  */
    {
                        if( Logical_Works == 1 )
                        {
                              printf("We have the value %d \n", (yyvsp[-1].IntVal)); 
                        }
                  }
#line 2013 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 432 "LFAC.y" /* yacc.c:1646  */
    {(yyval.IntVal) = (yyvsp[0].IntVal);}
#line 2019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 433 "LFAC.y" /* yacc.c:1646  */
    { (yyval.IntVal) = (yyvsp[-2].IntVal) + (yyvsp[0].IntVal); }
#line 2025 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 434 "LFAC.y" /* yacc.c:1646  */
    { (yyval.IntVal) = (yyvsp[-2].IntVal) - (yyvsp[0].IntVal); }
#line 2031 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 435 "LFAC.y" /* yacc.c:1646  */
    { (yyval.IntVal) = (yyvsp[-2].IntVal) * (yyvsp[0].IntVal); }
#line 2037 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 436 "LFAC.y" /* yacc.c:1646  */
    { (yyval.IntVal) = (yyvsp[-2].IntVal) / (yyvsp[0].IntVal); }
#line 2043 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 441 "LFAC.y" /* yacc.c:1646  */
    {
                        char *VarType = GetType((yyvsp[0].VarName)); 
                        if (VarType == NULL)
                        {
                              printf("the variable %s was not initialized \n", (yyvsp[0].VarName));
                              Logical_Works = 0;
                        }
                        if (VarType && strcmp(VarType, "Int") != 0)
                        {
                              printf("the variable %s is not of type Int \n", (yyvsp[0].VarName));
                              Logical_Works = 0;
                        }
                        if (VarType && strcmp(VarType, "Int") == 0 ) 
                        {
                              //printf("we return %s\n",$1);
                              (yyval.IntVal) =  SearchVal((yyvsp[0].VarName));
                        }
                  }
#line 2066 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 461 "LFAC.y" /* yacc.c:1646  */
    {(yyval.IntVal) = (yyvsp[0].IntVal);}
#line 2072 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 465 "LFAC.y" /* yacc.c:1646  */
    {
                                    Parameter_NR++; 
                                    CorrectParameters((yyvsp[0].VarName)); 
                              }
#line 2081 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 469 "LFAC.y" /* yacc.c:1646  */
    { Parameter_NR++; CorrectParameters((yyvsp[0].VarName)); }
#line 2087 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 500 "LFAC.y" /* yacc.c:1646  */
    {(yyval.IntVal)=(yyvsp[0].IntVal);}
#line 2093 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 507 "LFAC.y" /* yacc.c:1646  */
    {(yyval.FloatVal)=(yyvsp[0].FloatVal);}
#line 2099 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 514 "LFAC.y" /* yacc.c:1646  */
    {(yyval.CharVal)=(yyvsp[0].CharVal);}
#line 2105 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 521 "LFAC.y" /* yacc.c:1646  */
    {(yyval.BoolVal)=(yyvsp[0].BoolVal);}
#line 2111 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2115 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 527 "LFAC.y" /* yacc.c:1906  */


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
