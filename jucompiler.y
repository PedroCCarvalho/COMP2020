%{
    #include <stdio.h>
    #include "y.tab.h"
    #include <string.h>
    int yylex(void);
    void yyerror (const char *s);
    extern int coluna, linha;
    extern char* yytext;
%}


%union{
 char* test;

}

%token AND ASSIGN STAR DIV COMMA EQ GT GE LBRACE LE LPAR LSQ LT MINUS MOD NE NOT OR PLUS RBRACE RPAR RSQ SEMICOLON ARROW LSHIFT RSHIFT XOR BOOL CLASS DOTLENGHT DOUBLE ELSE IF INT PRINT PARSEINT PUBLIC STATIC STRING VOID WHILE RETURN
%token <test> ID STRLIT REALLIT RESERVED INTLIT BOOLLIT

%type <test> Program MethodDecl StatementAux1 FieldDecl StatementAux AdditionalExpr1 AdditionalDecl FormalParamsAux MethodBodyAux Type MethodHeader FormalParams MethodBody VarDecl Statement AdditionalExpr MethodInvocation Assignment ParseArgs Expr ProgramAux

%left COMMA
%right ASSIGN
%left OR
%left AND
%left XOR
%left EQ NE LE GT LT GE
%left RSHIFT LSHIFT
%left PLUS MINUS
%left STAR DIV MOD
%left UNARY
%left LPAR LSQ RPAR RSQ
%nonassoc ELSE
%nonassoc IF


%%

Program: CLASS ID LBRACE ProgramAux RBRACE {;} 
        ;

ProgramAux: MethodDecl ProgramAux{;}
           |FieldDecl  ProgramAux{;}
           |SEMICOLON  ProgramAux{;}
           |/*gvazio*/     {;}
           ;

MethodDecl: PUBLIC STATIC MethodHeader MethodBody {;}
            ;

FieldDecl: PUBLIC STATIC Type ID AdditionalDecl SEMICOLON {;}
          |error SEMICOLON {;}
          ;

AdditionalDecl: COMMA ID  AdditionalDecl{;}
              |/*vazio*/                {;}
            ;

Type: BOOL {;}
    | INT  {;}
    | DOUBLE {;}
    ;

MethodHeader: Type ID LPAR FormalParams RPAR {;}
            | VOID ID LPAR FormalParams RPAR {;}
            | VOID ID LPAR RPAR {;}
            | Type ID LPAR RPAR {;}
            ;

FormalParams:Type ID FormalParamsAux{;}
            |STRING LSQ RSQ ID {;}
            ;

FormalParamsAux: COMMA Type ID FormalParamsAux{;}
                |/*vazio*/ {;}
                ;

MethodBody: LBRACE MethodBodyAux RBRACE {;}
            ;

MethodBodyAux: Statement MethodBodyAux {;}
               |VarDecl MethodBodyAux  {;}
               |/*vazio*/ {;}
               ;

VarDecl: Type ID AdditionalDecl SEMICOLON {;}
        ;

Statement:LBRACE Statement RBRACE {;}
        |IF LPAR Expr RPAR Statement {;}
        |IF LPAR Expr RPAR Statement ELSE Statement{;}
        |WHILE LPAR Expr RPAR Statement {;}
        |RETURN StatementAux SEMICOLON {;}
        |StatementAux1 SEMICOLON{;}
        |PRINT LPAR Expr RPAR SEMICOLON {;}
        |error SEMICOLON {;}
        ;

StatementAux: Expr {;}
              |/*vazio*/  {;}
              ;

StatementAux1: MethodInvocation {;}
               |Assignment {;}
               |ParseArgs {;}
               |/*vazio*/ {;}
               ;

AdditionalExpr: Expr AdditionalExpr1{;}
               |/*vazio*/ {;}
        ;

AdditionalExpr1: COMMA Expr AdditionalExpr1{;}
               |/*vazio*/ {;}
        ;

MethodInvocation:ID LPAR AdditionalExpr RPAR {;}
                |ID LPAR error RPAR {;}
                ;

Assignment: ID ASSIGN Expr {;}
            ;

ParseArgs: PARSEINT LPAR ID LSQ Expr RSQ RPAR {;}
           |PARSEINT LPAR error RPAR {;}
        ;

Expr: Expr PLUS Expr  {;}
    | Expr MINUS Expr {;}
    | Expr STAR Expr  {;}
    | Expr DIV Expr   {;}
    | Expr MOD Expr   {;}
    | Expr EQ Expr    {;}
    | Expr GE Expr    {;}
    | Expr GT Expr    {;}
    | Expr LE Expr    {;}
    | Expr LT Expr    {;}
    | Expr NE Expr    {;}
    | LPAR Expr RPAR  {;}
    | Expr AND Expr   {;}
    | Expr OR Expr    {;}
    | Expr XOR Expr   {;}
    | Expr LSHIFT Expr   {;}
    | Expr RSHIFT Expr   {;}
    | MethodInvocation   {;}
    | Assignment {}
    | MINUS Expr %prec UNARY{;}
    | NOT Expr %prec UNARY{;}
    | PLUS Expr %prec UNARY{;}
    | ParseArgs  {;}
    | ID DOTLENGHT    {;}
    | ID      {;}
    | INTLIT  {;}
    | REALLIT {;}
    | BOOLLIT {;}
    | STRLIT {;}
    | LPAR error RPAR {;}
    ;


%%

void yyerror (const char *s) { 
     printf ("Line %d, col %d: %s: %s\n",linha,(int)(coluna-strlen(yytext)), s, yytext);
}