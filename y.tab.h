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
extern YYSTYPE yylval;
