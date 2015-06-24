#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20130925

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)

#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "Parser.y"
  #include <cstdio>
  #include <string>
  #include <iostream>
  #include "SymbolTable.h"
  void yyerror(char *);
  int yylex(void);
  SymbolTable table;
#line 11 "Parser.y"
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union{
   long num;
   char cad[100];
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 39 "y.tab.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define NUM 257
#define ID 258
#define TYPE 259
#define OP 260
#define CLASS 261
#define PUBLIC 262
#define STATIC 263
#define EXTENDS 264
#define IF 265
#define ELSE 266
#define WHILE 267
#define THIS 268
#define RETURN 269
#define PRINT 270
#define NEW 271
#define STRING 272
#define TRUE 273
#define FALSE 274
#define AND 275
#define OR 276
#define LENGTH 277
#define MAIN 278
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    1,    2,    2,    4,    4,    5,    5,    7,    7,
    7,    7,    7,    6,    6,    8,    8,    9,    9,   10,
    3,    3,    3,   11,   11,   11,   11,   11,   11,   11,
   11,   11,   11,   11,   11,   13,   13,   12,   12,   12,
   12,   12,   12,   12,   12,   12,   12,   12,   12,   12,
   12,   12,   12,   12,   12,   12,   12,   12,
};
static const short yylen[] = {                            2,
    2,   17,    2,    0,    6,    8,    2,    0,    3,    5,
    6,    5,    6,    2,    0,    9,    8,    1,    3,    2,
    3,    2,    0,    5,    7,    5,    5,    4,    4,    4,
    4,    7,    3,    2,    1,    1,    3,    3,    3,    3,
    3,    3,    3,    4,    3,    3,    6,    6,    5,    1,
    1,    1,    1,    1,    5,    4,    2,    3,
};
static const short yydefred[] = {                         0,
    0,    0,    0,    0,    0,    1,    0,    0,    0,    3,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    7,    0,    0,    0,    9,
    0,    0,    0,    5,   14,    0,    0,    0,    0,    0,
    0,    0,    0,    6,    0,   10,    0,   12,    0,    0,
   11,   13,    0,    0,    0,    0,    0,   20,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   35,
    0,    0,   19,    0,    0,    0,    0,    0,   50,   53,
   54,    0,   51,   52,    0,   34,    0,    0,    0,    0,
   17,   22,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   33,    0,
    0,    0,    0,    0,    0,   21,   16,    0,    0,   28,
   29,   30,   31,    0,    0,    0,    0,   58,    0,    0,
    0,    0,    0,    0,    0,    0,   45,    0,    0,    0,
    0,   26,   56,    0,   44,    0,   27,    2,    0,    0,
   55,    0,   49,    0,    0,   32,   25,    0,   47,   48,
    0,   37,
};
static const short yydgoto[] = {                          2,
    3,    6,   69,    7,   17,   24,   70,   25,   55,   56,
   71,   88,  155,
};
static const short yysindex[] = {                      -256,
 -227,    0, -228,  -66, -210,    0, -228, -195, -114,    0,
 -188, -190, -180, -175,  -36,  -69, -172, -180, -185, -180,
  -56,  -75, -161,  -21, -172,    0,   68, -172,  -65,    0,
   14, -142, -137,    0,    0, -149,   -1,   43,   74, -118,
   82,  109,   73,    0,  100,    0,  128,    0,  -40,   75,
    0,    0,  -67,   71,  155,  156,  -59,    0,   23,   80,
  -53,  166,  -32,  168,  169,  -33,  170,   23,   86,    0,
   23,   23,    0,   90,  -25,   -6,  -25,  -25,    0,    0,
    0, -242,    0,    0,  -25,    0,  -25,   60,  -25,   89,
    0,    0,   95,   23,   67,  158,  163,  164,   83,   -2,
    4,  194,  146,   10,  111,  -25,  -25,  -25,    0,  -25,
  -25,  -25,  -25, -252,   20,    0,    0,  122,  195,    0,
    0,    0,    0,   23,   23,  214,  -25,    0,  111,  111,
   72,  111,  111,  111,  111,  219,    0,  201,  136,  -25,
   -3,    0,    0,   92,    0,  -29,    0,    0,  102,   23,
    0,  222,    0,   31,  228,    0,    0,   13,    0,    0,
  222,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,  272,    0,    0,    0,  272,    0,    0,    0,
    0,    0, -123,    0,    0,    0,  150, -123,    0, -123,
    0,    0,    0,    0,  150,    0,    0,  150,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  235,    0,    0,  152,    0,
    0,    0,    0,    0,    0,    0,    0,  152,    0,    0,
 -111,  152,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  152,    0,  124,  130,  135,    0,    0,
    0,    0,    0,    0,   -5,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0, -111, -111,    0,    0,    0,    1,   37,
    0,  138,  157,  171,  177,  -22,    0,    0,    0,    0,
   63,    0,    0,    0,    0,    0,    0,    0,    0, -111,
    0,   40,    0,    0,    0,    0,    0,    0,    0,    0,
  237,    0,
};
static const short yygindex[] = {                         0,
    0,  277,  133,    0,   12,  -15,   79,    0,  226,    0,
    0,  285,  131,
};
#define YYTABLESIZE 431
static const short yytable[] = {                         87,
   54,    8,   30,   87,    1,  136,   85,   87,   13,   35,
   85,  153,   37,   23,   85,  102,  103,   32,   46,   46,
   46,   22,   46,   46,  137,   86,   87,   39,   76,   26,
    4,   28,    5,   85,   29,   57,   46,   46,  124,  113,
  111,   38,  112,  114,  125,  113,  111,    9,  112,  114,
  128,  113,  111,   57,  112,  114,    8,  110,   75,   38,
  138,  113,  111,  110,  112,  114,   11,   15,   46,  110,
   46,  159,  113,  111,   14,  112,  114,   39,   16,  110,
   36,   53,   53,   19,   53,   53,   20,   57,  108,   23,
  110,   18,   27,   38,  108,   39,   18,   33,   18,   53,
  108,  113,  111,   34,  112,  114,   40,   36,  113,  111,
  108,  112,  114,  113,  111,   41,  112,  114,  109,  110,
   42,  108,   43,   44,  113,  111,  110,  112,  114,   39,
   53,  110,   46,  113,  111,   45,  112,  114,    8,   47,
   48,  123,  110,  113,  111,   68,  112,  114,   49,   12,
  108,  110,  113,  111,   23,  112,  114,  108,   51,  119,
  156,  110,  108,   50,  145,   50,   50,   57,   50,   50,
  110,   51,   51,  108,   51,   51,   52,   52,   40,   52,
   52,   31,  108,   50,  151,   24,   52,   24,   21,   51,
   58,   38,  108,   59,   52,   60,   40,   41,   62,   61,
   90,  108,   72,   92,   93,   53,   74,   77,   78,   89,
   91,   42,   94,  116,   50,   41,  120,   43,   53,  117,
   51,  121,  122,   79,   80,   52,  118,   79,  152,   42,
   40,   79,   80,  126,   81,   43,  127,   82,   81,   83,
   84,   82,   81,   83,   84,   82,  139,   83,   84,   41,
   96,   80,   46,   46,  143,  140,  141,  142,  146,  147,
  148,   81,  150,   42,   82,  158,   97,   98,  160,   43,
  161,    4,  106,  107,   15,   18,   23,   36,  106,  107,
   63,   16,  157,   10,  106,  107,   73,   64,  162,   65,
    0,   66,   67,    0,  106,  107,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  106,  107,    0,    0,    0,
    0,    0,    0,    0,   53,   53,    0,    0,    0,    0,
   24,   24,    0,    0,    0,    0,    0,   24,    0,   24,
    0,   24,   24,    0,  106,  107,    0,    0,    0,    0,
    0,  106,  107,    0,    0,    0,  106,  107,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  106,  107,   95,
   99,  100,  101,    0,    0,    0,  106,  107,    0,  104,
    0,  105,    0,  115,    0,    0,  106,  107,    0,    0,
    0,    0,    0,    0,    0,  106,  107,    0,    0,    0,
  129,  130,  131,    0,  132,  133,  134,  135,   50,   50,
    0,    0,    0,    0,   51,   51,    0,    0,    0,   52,
   52,  144,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  149,    0,    0,    0,    0,    0,
  154,
};
static const short yycheck[] = {                         33,
   41,  125,   59,   33,  261,  258,   40,   33,  123,   25,
   40,   41,   28,  125,   40,  258,  259,   93,   41,   42,
   43,   91,   45,   46,  277,   59,   33,   93,   61,   18,
  258,   20,  261,   40,   91,   41,   59,   60,   41,   42,
   43,   41,   45,   46,   41,   42,   43,  258,   45,   46,
   41,   42,   43,   59,   45,   46,  123,   60,   91,   59,
   41,   42,   43,   60,   45,   46,  262,  258,   91,   60,
   93,   41,   42,   43,  263,   45,   46,   41,  259,   60,
   41,   42,   43,  259,   45,   46,  123,   93,   91,  262,
   60,   13,  278,   93,   91,   59,   18,  259,   20,   60,
   91,   42,   43,  125,   45,   46,   93,   40,   42,   43,
   91,   45,   46,   42,   43,  258,   45,   46,   59,   60,
  258,   91,  272,  125,   42,   43,   60,   45,   46,   93,
   91,   60,   59,   42,   43,   93,   45,   46,  262,  258,
   59,   59,   60,   42,   43,  123,   45,   46,   40,  264,
   91,   60,   42,   43,  266,   45,   46,   91,   59,   93,
   59,   60,   91,   91,   93,   42,   43,   93,   45,   46,
   60,   42,   43,   91,   45,   46,   42,   43,   41,   45,
   46,  257,   91,   60,   93,  123,   59,  125,  258,   60,
  258,  257,   91,  123,   60,   41,   59,   41,  258,   44,
   68,   91,  123,   71,   72,  259,   41,   40,   40,   40,
  125,   41,  123,  125,   91,   59,   59,   41,  259,  125,
   91,   59,   59,  257,  258,   91,   94,  257,  258,   59,
   93,  257,  258,   40,  268,   59,   91,  271,  268,  273,
  274,  271,  268,  273,  274,  271,  125,  273,  274,   93,
  257,  258,  275,  276,   41,   61,  124,  125,   40,   59,
  125,  268,  266,   93,  271,   44,  273,  274,   41,   93,
  258,    0,  275,  276,  125,   41,  125,   41,  275,  276,
  258,  259,  150,    7,  275,  276,   61,  265,  158,  267,
   -1,  269,  270,   -1,  275,  276,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  275,  276,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  275,  276,   -1,   -1,   -1,   -1,
  258,  259,   -1,   -1,   -1,   -1,   -1,  265,   -1,  267,
   -1,  269,  270,   -1,  275,  276,   -1,   -1,   -1,   -1,
   -1,  275,  276,   -1,   -1,   -1,  275,  276,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  275,  276,   75,
   76,   77,   78,   -1,   -1,   -1,  275,  276,   -1,   85,
   -1,   87,   -1,   89,   -1,   -1,  275,  276,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  275,  276,   -1,   -1,   -1,
  106,  107,  108,   -1,  110,  111,  112,  113,  275,  276,
   -1,   -1,   -1,   -1,  275,  276,   -1,   -1,   -1,  275,
  276,  127,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  140,   -1,   -1,   -1,   -1,   -1,
  146,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 278
#if YYDEBUG
static const char *yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"'!'",0,0,0,0,0,0,"'('","')'","'*'","'+'","','","'-'","'.'",0,0,0,0,0,0,0,0,0,0,
0,0,"';'","'<'","'='",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"'['",0,"']'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'{'",0,
"'}'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,"NUM","ID","TYPE","OP","CLASS","PUBLIC","STATIC",
"EXTENDS","IF","ELSE","WHILE","THIS","RETURN","PRINT","NEW","STRING","TRUE",
"FALSE","AND","OR","LENGTH","MAIN",
};
static const char *yyrule[] = {
"$accept : program",
"program : MainClass ClassDeclarations",
"MainClass : CLASS ID '{' PUBLIC STATIC TYPE MAIN '(' STRING '[' ']' ID ')' '{' Statements '}' '}'",
"ClassDeclarations : ClassDeclaration ClassDeclarations",
"ClassDeclarations :",
"ClassDeclaration : CLASS ID '{' VarDeclarations MethodDeclarations '}'",
"ClassDeclaration : CLASS ID EXTENDS ID '{' VarDeclarations MethodDeclarations '}'",
"VarDeclarations : VarDeclaration VarDeclarations",
"VarDeclarations :",
"VarDeclaration : TYPE ID ';'",
"VarDeclaration : TYPE ID '[' ']' ';'",
"VarDeclaration : TYPE ID '[' NUM ']' ';'",
"VarDeclaration : TYPE '[' ']' ID ';'",
"VarDeclaration : TYPE '[' NUM ']' ID ';'",
"MethodDeclarations : MethodDeclaration MethodDeclarations",
"MethodDeclarations :",
"MethodDeclaration : PUBLIC TYPE ID '(' ParamList ')' '{' Statements '}'",
"MethodDeclaration : PUBLIC TYPE ID '(' ')' '{' Statements '}'",
"ParamList : Param",
"ParamList : Param ',' ParamList",
"Param : TYPE ID",
"Statements : '{' Statements '}'",
"Statements : Statement Statements",
"Statements :",
"Statement : IF '(' Expression ')' Statements",
"Statement : IF '(' Expression ')' Statements ELSE Statements",
"Statement : WHILE '(' Expression ')' Statements",
"Statement : PRINT '(' Expression ')' ';'",
"Statement : ID '=' NUM ';'",
"Statement : ID '=' TRUE ';'",
"Statement : ID '=' FALSE ';'",
"Statement : ID '=' Expression ';'",
"Statement : ID '[' Expression ']' '=' Expression ';'",
"Statement : RETURN Expression ';'",
"Statement : RETURN ';'",
"Statement : VarDeclaration",
"VarList : ID",
"VarList : ID ',' VarList",
"Expression : Expression AND Expression",
"Expression : Expression OR Expression",
"Expression : Expression '<' Expression",
"Expression : Expression '+' Expression",
"Expression : Expression '-' Expression",
"Expression : Expression '*' Expression",
"Expression : Expression '[' Expression ']'",
"Expression : Expression '.' LENGTH",
"Expression : Expression '.' ID",
"Expression : Expression '.' ID '(' Expression ')'",
"Expression : Expression '.' ID '(' VarList ')'",
"Expression : Expression '.' ID '(' ')'",
"Expression : NUM",
"Expression : TRUE",
"Expression : FALSE",
"Expression : ID",
"Expression : THIS",
"Expression : NEW TYPE '[' Expression ']'",
"Expression : NEW ID '(' ')'",
"Expression : '!' Expression",
"Expression : '(' Expression ')'",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    short    *s_base;
    short    *s_mark;
    short    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 122 "Parser.y"

void yyerror(char *error) {
  fprintf(stderr,"%s\n", error);
}

int main(void) {
  yyparse();
  std::cout<<table;
  return 0;
}
    

#line 398 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (short *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return -1;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return -1;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack)) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    yyerror("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 9:
#line 44 "Parser.y"
	{string id(yystack.l_mark[-1].cad); if(table.find(id)!=table.end()){table[id].type=yystack.l_mark[-2].num;} }
break;
case 10:
#line 45 "Parser.y"
	{string id(yystack.l_mark[-3].cad); if(table.find(id)!=table.end()){table[id].type=yystack.l_mark[-4].num+3;} }
break;
case 11:
#line 46 "Parser.y"
	{string id(yystack.l_mark[-4].cad); if(table.find(id)!=table.end()){table[id].type=yystack.l_mark[-5].num+3;table[id].value=yystack.l_mark[-2].num;} }
break;
case 12:
#line 47 "Parser.y"
	{string id(yystack.l_mark[-1].cad); if(table.find(id)!=table.end()){table[id].type=yystack.l_mark[-4].num+3;} }
break;
case 13:
#line 48 "Parser.y"
	{string id(yystack.l_mark[-1].cad); if(table.find(id)!=table.end()){table[id].type=yystack.l_mark[-5].num+3;table[id].value=yystack.l_mark[-3].num;} }
break;
case 16:
#line 58 "Parser.y"
	{string id(yystack.l_mark[-6].cad); if(table.find(id)!=table.end()){table[id].type=yystack.l_mark[-7].num;} }
break;
case 17:
#line 59 "Parser.y"
	{string id(yystack.l_mark[-5].cad); if(table.find(id)!=table.end()){table[id].type=yystack.l_mark[-6].num;} }
break;
case 28:
#line 82 "Parser.y"
	{string id(yystack.l_mark[-3].cad); if(table.find(id)!=table.end()){table[id].value=yystack.l_mark[-1].num;} }
break;
case 29:
#line 83 "Parser.y"
	{string id(yystack.l_mark[-3].cad); if(table.find(id)!=table.end()){table[id].value=1;} }
break;
case 30:
#line 84 "Parser.y"
	{string id(yystack.l_mark[-3].cad); if(table.find(id)!=table.end()){table[id].value=0;} }
break;
#line 644 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = 0;
                if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
                if (!yys) yys = "illegal-symbol";
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (short) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    yyerror("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
