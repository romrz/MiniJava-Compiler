%{
  #include <cstdio>
  #include <string>
  #include <iostream>
  #include "SymbolTable.h"
  void yyerror(char *);
  int yylex(void);
  SymbolTable table;
%}

%union{
   long num;
   char cad[100];
};

%token NUM ID TYPE OP CLASS PUBLIC STATIC EXTENDS IF ELSE WHILE THIS RETURN PRINT NEW STRING TRUE FALSE AND OR LENGTH MAIN

%%

program:
    MainClass ClassDeclarations
    ;

MainClass:
    CLASS ID '{' PUBLIC STATIC TYPE MAIN '(' STRING '[' ']' ID ')' '{' Statements '}' '}'
    ;

ClassDeclarations:
    ClassDeclaration ClassDeclarations
    |
    ;

ClassDeclaration:
    CLASS ID '{' VarDeclarations MethodDeclarations '}'
    | CLASS ID EXTENDS ID '{' VarDeclarations MethodDeclarations '}'
    ;

VarDeclarations:
    VarDeclaration VarDeclarations
    |
    ;

VarDeclaration:
     TYPE ID ';' {string id($2.cad); if(table.find(id)!=table.end()){table[id].type=$1.num;} }
    |TYPE ID '[' ']' ';' {string id($2.cad); if(table.find(id)!=table.end()){table[id].type=$1.num+3;} }
    |TYPE ID '[' NUM ']' ';' {string id($2.cad); if(table.find(id)!=table.end()){table[id].type=$1.num+3;table[id].value=$4.num;} }
    |TYPE '[' ']' ID  ';' {string id($4.cad); if(table.find(id)!=table.end()){table[id].type=$1.num+3;} }
    |TYPE '[' NUM ']' ID  ';' {string id($5.cad); if(table.find(id)!=table.end()){table[id].type=$1.num+3;table[id].value=$3.num;} }
    ;


MethodDeclarations:
    MethodDeclaration MethodDeclarations
    |
    ;

MethodDeclaration:
     PUBLIC TYPE ID '(' ParamList ')' '{' Statements '}' {string id($3.cad); if(table.find(id)!=table.end()){table[id].type=$2.num;} }
    |PUBLIC TYPE ID '(' ')' '{' Statements '}' {string id($3.cad); if(table.find(id)!=table.end()){table[id].type=$2.num;} }
    ;

ParamList:
    Param
    | Param ',' ParamList
    ;

Param:
    TYPE ID
    ;

Statements:
    '{' Statements '}'
    | Statement Statements
    |
    ;

Statement:
    IF '(' Expression ')' Statements
    | IF '(' Expression ')' Statements ELSE Statements
    | WHILE '(' Expression ')' Statements
    | PRINT '(' Expression ')' ';'
    | ID '=' NUM ';' {string id($1.cad); if(table.find(id)!=table.end()){table[id].value=$3.num;} }
    | ID '=' TRUE ';' {string id($1.cad); if(table.find(id)!=table.end()){table[id].value=1;} }
    | ID '=' FALSE ';' {string id($1.cad); if(table.find(id)!=table.end()){table[id].value=0;} } 
    | ID '=' Expression ';'
    | ID '[' Expression ']' '=' Expression ';'
    | RETURN Expression ';'
    | RETURN ';'
    | VarDeclaration
    ;

VarList:
    ID
   |ID ',' VarList
   ;

Expression:
    Expression AND Expression
    | Expression OR Expression
    | Expression '<' Expression
    | Expression '+' Expression
    | Expression '-' Expression
    | Expression '*' Expression
    | Expression '[' Expression ']'
    | Expression '.' LENGTH
    | Expression '.' ID
    | Expression '.' ID '(' Expression ')'
    | Expression '.' ID '(' VarList ')'
    | Expression '.' ID '(' ')'
    | NUM
    | TRUE
    | FALSE
    | ID
    | THIS
    | NEW TYPE '[' Expression ']'
    | NEW ID '(' ')'
    | '!' Expression
    | '(' Expression ')'
    ;

%%

void yyerror(char *error) {
  fprintf(stderr,"%s\n", error);
}

int main(void) {
  yyparse();
  std::cout<<table;
  return 0;
}
    

