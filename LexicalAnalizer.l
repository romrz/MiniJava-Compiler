%{
#include <stdio.h>
#include <stdlib.h>

#define ID_MAX_LEN 16

%}

ReservedWord "class"|"public"|"static"|"void"|"int"|"boolean"|"extends"|"if"|"else"|"while"|"this"|"return"|"System.out.println"|"new"|"String"
ID [a-zA-Z_][a-zA-Z0-9_]*
HexDigit [0-9A-Za-z]
String "\""(("\\"x{HexDigit}{2})|("\\"u{HexDigit}{4})|("\\"[^xu])|("\\\"")|([^"\"""\\""\n"]))*"\""
Operator "+"|"-"|"*"|"."|"!"|"="|"&&"|"<"|","
GroupingCharacter "("|")"|"{"|"}"|"["|"]"

BooleanConstant "true"|"false"
Number [0-9]+

InstructionEnd ";"
Blank " "|"\t"|"\n"

Comment ("//".*)|("/*"([^'*']|("*"+([^"*""/"])))*"*"+"/")
CommentError "*/"|"/*"

InvalidID [0-9]*{ID}
InvalidChar [^a-zA-Z_0-9'+''!'('&''&')'<''+''-''*''.'';''='','('/''/')('/''*')('*''/'){Blank}\(\)\{\}\[\]]
InvalidNumber {Number}([a-zA-Z_"."]{Number}?)+

%option noyywrap
%option yylineno

%%
{String}              { printf("%d: String: %s\n", yylineno, yytext); }
{ReservedWord}        { printf("%d: ReservedWord: %s\n", yylineno, yytext); }
{Operator}            { printf("%d: Operator: %s\n", yylineno, yytext); }
{GroupingCharacter}   { printf("%d: %s\n", yylineno, yytext); }

{BooleanConstant}     { printf("%d: BooleanConstant: %s\n", yylineno, yytext); }
{Number}              { errno = 0;
                        strtol(yytext, NULL, 10);
                        if(errno == ERANGE)
                          fprintf(stderr,"ERROR: (Line %d) Numeric constant max length: %s\n", yylineno, yytext);
                        else
                          printf("%d: Number: %s\n", yylineno, yytext); }

{ID}                  { if(yyleng > ID_MAX_LEN)
                          fprintf(stderr,"ERROR: (Line %d) ID max length: %s\n", yylineno, yytext);
                        else
                          printf("%d: ID: %s\n", yylineno, yytext); }

{InstructionEnd}      { printf("%d: %s\n", yylineno, yytext); }

{Blank}               { ; }
{Comment}             { printf("%d: %s\n", yylineno, yytext); }
{CommentError}		  { fprintf(stderr,"ERROR: (Line %d) Comment Error: %s\n", yylineno, yytext); }

{InvalidID}           { fprintf(stderr,"ERROR: (Line %d) Invalid ID: %s\n", yylineno, yytext); }
{InvalidNumber}       { fprintf(stderr,"ERROR: (Line %d) Invalid Number %s\n",yylineno,yytext); }

.                     { fprintf(stderr,"ERROR: (Line %d) Invalid Char %s\n",yylineno,yytext); }

%%

int main(){
  return yylex();
}
