%{
  #include <cstdio>
  
  void yyerror(char *);
  int yylex(void);
  
%}

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
     TYPE ID ';'
    |TYPE ID '[' ']' ';'
    |TYPE ID '[' NUM ']' ';'
    |TYPE '[' ']' ID  ';'
    |TYPE '[' NUM ']' ID  ';'
    ;


MethodDeclarations:
    MethodDeclaration MethodDeclarations
    |
    ;

MethodDeclaration:
     PUBLIC TYPE ID '(' ParamList ')' '{' Statements '}'
    |PUBLIC TYPE ID '(' ')' '{' Statements '}'
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
    |IF '(' Expression ')' Statements ELSE Statements
    | WHILE '(' Expression ')' Statements
    | PRINT '(' Expression ')' ';'
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
  return 0;
}
    

