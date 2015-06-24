%{
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include "SymbolTable.h"

void yyerror(char *s);
#include "y.tab.h"

#define ID_MAX_LEN 16

extern SymbolTable table;
long NUM_VAL;

%}

ID [a-zA-Z_][a-zA-Z0-9_]*
HexDigit [0-9A-Za-z]
String "\""(("\\"x{HexDigit}{2})|("\\"u{HexDigit}{4})|("\\"[^xu])|("\\\"")|([^"\"""\\""\n"]))*"\""
Operator "+"|"-"|"*"|"."|"!"|"="|"<"|","
OpenParenthesis "("
CloseParenthesis ")"
OpenBrake "["
CloseBrake "]"
OpenBrace "{"
CloseBrace "}"
InstructionEnd ";"

Number [0-9]+

Blank " "|"\t"|"\n"

Comment ("//".*)|("/*"([^'*']|("*"+([^"*""/"])))*"*"+"/")
CommentError "*/"|"/*"

InvalidID [0-9]*{ID}
InvalidChar [^a-zA-Z_0-9'+''!'('&''&')'<''+''-''*''.'';''='','('/''/')('/''*')('*''/'){Blank}\(\)\{\}\[\]]
InvalidNumber {Number}([a-zA-Z_"."]{Number}?)+

%option noyywrap
%option yylineno

%%
{String}              {}

"class"               return CLASS;
"public"              return PUBLIC;
"static"              return STATIC;
"int"                 {yylval.num=INT; return TYPE;}
"void"                {yylval.num=VOID; return TYPE;}
"boolean"             {yylval.num=BOOL; return TYPE;}
"extends"             return EXTENDS;
"if"                  return IF;
"else"                return ELSE;
"while"               return WHILE;
"this"                return THIS;
"return"              return RETURN;
"System.out.println"  return PRINT;
"new"                 return NEW;
"String"              return STRING;
"true"                return TRUE;
"false"               return FALSE;
"&&"                  return AND;
"||"                  return OR;
"length"              return LENGTH;
"main"                return MAIN;

{Operator}            return *yytext;
{OpenParenthesis}     return *yytext;
{CloseParenthesis}    return *yytext;
{OpenBrake}           return *yytext;
{CloseBrake}          return *yytext;
{OpenBrace}           return *yytext;
{CloseBrace}          return *yytext;
{InstructionEnd}      return *yytext;

{Number}              { errno = 0;
                        strtol(yytext, NULL, 10);
                        if(errno == ERANGE)
                          fprintf(stderr,"ERROR: (Line %d) Numeric constant max length: %s\n", yylineno, yytext);
			else {
                          yylval.num = strtol(yytext, NULL, 10);
			  return NUM;
			}
                      }

{ID}                  { if(yyleng > ID_MAX_LEN)
                          fprintf(stderr,"ERROR: (Line %d) ID max length: %s\n", yylineno, yytext);
                        else {
               			  string id(yytext);
                   			  // Si no esta el id en la tabla inserta toda la informacion nueva
			                     // si ya existe el id solo añade el nuevo numero de linea
			                 if(table.find(id) == table.end())
			                     table.insert( {id, TableInfo{INT, 0, vector<int>({yylineno})}} );
			                 else
			                     table[id].lines.push_back(yylineno);
               			  strcpy(yylval.cad,yytext);
			                 return ID;
			               }
		               }



{Blank}               { ; }
{Comment}             {}
{CommentError}	      { fprintf(stderr,"ERROR: (Line %d) Comment Error: %s\n", yylineno, yytext); }

{InvalidID}           { fprintf(stderr,"ERROR: (Line %d) Invalid ID: %s\n", yylineno, yytext); }
{InvalidNumber}       { fprintf(stderr,"ERROR: (Line %d) Invalid Number %s\n",yylineno,yytext); }

.                     { fprintf(stderr,"ERROR: (Line %d) Invalid Char %s\n",yylineno,yytext); }

%%

//int yywrap(void) {
//  return 1;
//}
