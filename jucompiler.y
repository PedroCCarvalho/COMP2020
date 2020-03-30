%{
    #include <stdio.h>
    int yylex(void);
    void yyerror (const char *s);
%}

%token AND ASSIGN STAR DIV COMMA EQ GT GE LBRACE LE LPAR LSQ LT MINUS MOD NE NOT OR PLUS RBRACE RPAR RSQ SEMICOLON ARROW LSHIFT RSHIFT XOR BOOL CLASS DOTLENGHT DOUBLE ELSE IF INT PRINT PARSEINT PUBLIC STATIC STRING VOID WHILE RETURN
%token <string> ID STRLIT REALLIT RESERVED INTLIT

%%

Program: CLASS ID LBRACE MethodDecl RBRACE {$$ =$1;} 
        |CLASS ID LBRACE FieldDecl RBRACE {$$ =$1;}
        |CLASS ID LBRACE SEMICOLON RBRACE {$$ =$1;}
        ;

MethodDecl: PUBLIC STATIC MethodHeader MethodBody {$$ = $1;}
            ;

FieldDecl: PUBLIC STATIC Type ID SEMICOLON {$$ =$1;}
          |PUBLIC STATIC Type ID AdditionalDecl SEMICOLON {$$ = $1;}
          ;

AdditionalDecl: COMMA ID {$$ = $1;}
              |AdditionalDecl AdditionalDecl {$$ = $1;}
            ;

Type: BOOL {$$ = $1;}
    | INT  {$$ = $1;}
    | DOUBLE {$$ = $1;}
    ;

MethodHeader: Type ID LPAR FormalParams RPAR {$$ = $1;}
            | VOID ID LPAR FormalParams RPAR {$$ = $1;}
            ;

FormalParams:Type ID {$$ = $1;}
            |FormalParams COMMA TypeID {$$ = $1;}
            |STRING LSQ RSQ ID {$$ = $1;}
            ;

MethodBody: LBRACE Statement RBRACE {$$ = $1;}
            ;

VarDecl: Type ID SEMICOLON {$$ = $1;}
        |Type ID AdditionalDecl SEMICOLON {$$ = $1;}
        ;

Statement:LBRACE Statement RBRACE {$$ = $1;}
        |IF LPAR Expr RPAR Statement {$$ = $1;}
        |WHILE LPAR Expr RPAR Statement {$$ = $1;}
        |RETURN Expr SEMICOLON {$$ = $1;}
        |MethodInvocation SEMICOLON{$$ = $1;}
        |Assignment SEMICOLON {$$ = $1;}
        |ParseArgs SEMICOLON {$$ = $1;}
        |PRINT LPAR Expr RPAR SEMICOLON {$$ = $1;}
        |PRINT LPAR STRLIT RPAR SEMICOLON {$$ = $1;}
        ;

AdditionalExpr: COMMA Expr {$$ = $1;}
               |AdditionalExpr AdditionalExpr {$$ = $1;}
                ;

MethodInvocation:ID LPAR Expr RPAR {$$ = $1;}
                |ID LPAR Expr AdditionalExpr RPAR {$$ = $1;}
                ;

Assignment: ID ASSIGN Expr {$$ = $1;}
            ;

ParseArgs: PARSEINT LPAR ID LSQ Expr RSQ RPAR {$$ = $1;}
        ;

ExprMath: Expr PLUS Expr   {$$=$1+$3;}
    |     Expr MINUS Expr       {$$=$1-$3;}
    |     Expr STAR Expr       {$$=$1*$3;}
    |     Expr DIV Expr       {$$=$1/$3;}
    |     Expr MOD Expr       {$$=$1%$3;}
    ;

ExprLogic:Expr AND Expr     {$$=$1 && $3;}
        |Expr OR Expr       {$$=$1;}
        |Expr XOR Expr      {$$=$1;}
        |Expr LSHIFT Expr   {$$ = $1;}
        |Expr RSHIFT Expr   {$$ = $1;}
        ;

ExprCompare:Expr EQ Expr    {$$ = $1;}
           |Expr GE Expr    {$$ = $1;}
           |Expr GT Expr    {$$ = $1;}
           |Expr LE Expr    {$$ = $1;}
           |Expr LT Expr    {$$ = $1;}
           |Expr NE Expr    {$$ = $1;}
           ;

Signal: MINUS {$$=$1;}
      | NOT {$$ = $1;}
      | PLUS {$$ = $1;}
      ;

Expr: ExprMath {$$ = $1;}
    | ExprLogic {$$ = $1;}
    | ExprCompare {$$ = $1;}
    | LPAR Expr RPAR {$$ = $1;}
    | Signal Expr {$$ = $1;}
    | MethodInvocation {$$ = $1;}
    | Assignment {$$ = $1;}
    | ParseArgs {$$ = $1;}
    | ID DOTLENGHT {$$ = $1;}
    | INTLIT {$$ = $1;}
    | REALLIT {$$ = $1;}
    | BOOLLIT {$$ = $1;}
    ;

calc: expression                        {printf("%d\n", $1);}




%%

int main() {
    yyparse();
    return 0;
}

