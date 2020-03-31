%{
    #include <stdio.h>
    int yylex(void);
    void yyerror (const char *s);
%}

%token AND ASSIGN STAR DIV COMMA EQ GT GE LBRACE LE LPAR LSQ LT MINUS MOD NE NOT OR PLUS RBRACE RPAR RSQ SEMICOLON ARROW LSHIFT RSHIFT XOR BOOL CLASS DOTLENGHT DOUBLE ELSE IF INT PRINT PARSEINT PUBLIC STATIC STRING VOID WHILE RETURN
%token <string> ID STRLIT REALLIT RESERVED INTLIT BOOLLIT

%type <string> Program MethodDecl FieldDecl AdditionalDecl Type MethodHeader FormalParams MethodBody VarDecl Statement AdditionalExpr MethodInvocation Assignment ParseArgs ExprMath ExprLogic ExprCompare Expr Signal


%left COMMA
%right ASSIGN
%left OR
%left AND
%left BITWISEOR
%left BITWISEXOR
%left BITWISEAND
%left EQ NE
%left GE GT LT LE
%left PLUS MINUS 
%left MOD DIV MUL
%left SIGNAL
%right NOT
%left LPAR

%%

Program: CLASS ID LBRACE MethodDecl RBRACE {;} 
        |CLASS ID LBRACE FieldDecl RBRACE {;}
        |CLASS ID LBRACE SEMICOLON RBRACE {;}
        ;

MethodDecl: PUBLIC STATIC MethodHeader MethodBody {;}
            ;

FieldDecl: PUBLIC STATIC Type ID SEMICOLON {;}
          |PUBLIC STATIC Type ID AdditionalDecl SEMICOLON {;}
          ;

AdditionalDecl: COMMA ID {;}
              |AdditionalDecl AdditionalDecl {;}
            ;

Type: BOOL {;}
    | INT  {;}
    | DOUBLE {;}
    ;

MethodHeader: Type ID LPAR FormalParams RPAR {;}
            | VOID ID LPAR FormalParams RPAR {;}
            ;

FormalParams:Type ID {;}
            |FormalParams COMMA Type ID {;}
            |STRING LSQ RSQ ID {;}
            ;

MethodBody: LBRACE Statement RBRACE {;}
            ;

VarDecl: Type ID SEMICOLON {;}
        |Type ID AdditionalDecl SEMICOLON {;}
        ;

Statement:LBRACE Statement RBRACE {;}
        |IF LPAR Expr RPAR Statement {;}
        |WHILE LPAR Expr RPAR Statement {;}
        |RETURN Expr SEMICOLON {;}
        |MethodInvocation SEMICOLON{;}
        |Assignment SEMICOLON {;}
        |ParseArgs SEMICOLON {;}
        |PRINT LPAR Expr RPAR SEMICOLON {printf("%d\n", $3);}
        |PRINT LPAR STRLIT RPAR SEMICOLON {printf("%d\n", $3);}
        ;

AdditionalExpr: COMMA Expr {;}
               |AdditionalExpr AdditionalExpr {;}
                ;

MethodInvocation:ID LPAR Expr RPAR {;}
                |ID LPAR Expr AdditionalExpr RPAR {;}
                ;

Assignment: ID ASSIGN Expr {;}
            ;

ParseArgs: PARSEINT LPAR ID LSQ Expr RSQ RPAR {;}
        ;

ExprMath: Expr PLUS Expr   {;}
    |     Expr MINUS Expr       {;}
    |     Expr STAR Expr       {;}
    |     Expr DIV Expr       {;}
    |     Expr MOD Expr       {;}
    ;

ExprLogic:Expr AND Expr     {;}
        |Expr OR Expr       {;}
        |Expr XOR Expr      {;}
        |Expr LSHIFT Expr   {;}
        |Expr RSHIFT Expr   {;}
        ;

ExprCompare:Expr EQ Expr    {;}
           |Expr GE Expr    {;}
           |Expr GT Expr    {;}
           |Expr LE Expr    {;}
           |Expr LT Expr    {;}
           |Expr NE Expr    {;}
           ;

Signal: MINUS {;}
      | NOT {;}
      | PLUS {;}
      ;

Expr: ExprMath {;}
    | ExprLogic {;}
    | ExprCompare {;}
    | LPAR Expr RPAR {;}
    | Signal Expr {;}
    | MethodInvocation {;}
    | Assignment {;}
    | ParseArgs {;}
    | ID DOTLENGHT {;}
    | INTLIT {;}
    | REALLIT {;}
    | BOOLLIT {;}
    ;


%%