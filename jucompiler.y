%{
    #include <stdio.h>
    #include "y.tab.h"
    #include <string.h>
    #include "tree.h"
    #include <stdlib.h>
    #include <stdarg.h>


    int yylex(void);
    void yyerror (const char *s);
    extern int coluna, linha, printError;
    extern char* yytext;
    node aux;
    node aux1;
    node aux2;
    node root;

%}


%union{
 char* string;
 struct no* node;
}

%token AND ASSIGN STAR DIV COMMA EQ GT GE LBRACE LE LPAR LSQ LT MINUS MOD NE NOT OR PLUS RBRACE RPAR RSQ SEMICOLON ARROW LSHIFT RSHIFT XOR BOOL CLASS DOTLENGHT DOUBLE ELSE IF INT PRINT PARSEINT PUBLIC STATIC STRING VOID WHILE RETURN
%token <string> ID STRLIT REALLIT RESERVED INTLIT BOOLLIT

%type <node> MethodHeader Program MethodDecl StatementAux1 StatementAuxRec PrintAux FieldDecl StatementAux AdditionalExpr1 AdditionalDecl FormalParamsAux MethodBodyAux Type FormalParams MethodBody VarDecl Statement AdditionalExpr MethodInvocation Assignment ParseArgs Expr ExprAux ExprAux2 ExprCompare ExprLogic ExprMath ProgramAux VOID 

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

Program: CLASS ID LBRACE ProgramAux RBRACE { root = createNode("Program", ""); aux = createNode("Id", $2); addNode(root,aux);addBrother(aux,$4); $$ = root; } 
        ;

ProgramAux: MethodDecl ProgramAux{$$=$1; addBrother($$,$2);}
           |FieldDecl  ProgramAux{$$ = $1; addBrother($$,$2);}
           |SEMICOLON  ProgramAux{$$ = $2;}
           |/*vazio*/     {$$ = NULL;}
           ;

MethodDecl: PUBLIC STATIC MethodHeader MethodBody {$$ = createNode("MethodDecl", ""); addNode($$,$3); addBrother($3,$4);}
            ;

FieldDecl: PUBLIC STATIC Type ID AdditionalDecl SEMICOLON {$$=createNode("FieldDecl",""); addNode($$,$3); addBrother($3,createNode("Id",$4));
                                                                                                                if($5!=NULL){
                                                                                                                        aux=$5;
                                                                                                                        while(aux!=NULL){
                                                                                                                                node aux1 = createNode("FieldDecl", "");
                                                                                                                                node aux2 = createNode("$3->type", $3->info);
                                                                                                                                addNode(aux1, aux2);
                                                                                                                                addBrother(aux2, createNode("Id", aux->info));
                                                                                                                                addBrother($$, aux1);
                                                                                                                                aux = aux->brother;
                                                                                                                        }
                                                                                                                        free(aux);
                                                                                                                }
                                                        }
          |error SEMICOLON {$$=NULL; printError = 1;}
          ;

AdditionalDecl: COMMA ID  AdditionalDecl{$$= createNode("Id", $2); addBrother($$, $3);}
              |/*vazio*/                {$$= NULL;}
            ;

Type: BOOL {$$ = createNode("Bool", "");}
    | INT  {$$ = createNode("Int", "");}
    | DOUBLE {$$ = createNode("Double", "");}
    ;

MethodHeader: Type ID LPAR FormalParams RPAR {$$ = createNode("MethodHeader", ""); addNode($$, $1); addBrother($1, createNode("Id", $2));
                                                                                aux = createNode("MethodParams", ""); addBrother($1, aux); addNode(aux, $4);
                                                }                                                
            | VOID ID LPAR FormalParams RPAR {$$ = createNode("MethodHeader", ""); $1= createNode("Void", ""); addNode($$,$1); addBrother($1,createNode("Id", $2));
                                                                                aux = createNode("MethodParams", ""); addBrother($1, aux); addNode(aux,$4);
                                                }
            | VOID ID LPAR RPAR {$$ = createNode("MethodHeader", ""); $1= createNode("Void", ""); addNode($$,$1); addBrother($1, createNode("Id", $2));}
            | Type ID LPAR RPAR {$$ = createNode("MethodHeader", ""); addNode($$,$1); addBrother($1, createNode("Id", $2));}
            ;

FormalParams:Type ID FormalParamsAux{$$= createNode("ParamDecl", ""); addNode($$,$1); aux = createNode("Id", $2);
                                                                    addBrother($1, aux);
                                                                    addBrother($$, $3);
                                                                }
            |STRING LSQ RSQ ID {$$ = createNode("ParamDecl", ""); aux = createNode("StringArray", ""); addNode($$, aux);
                                                                addBrother(aux, createNode("Id", $4));
            }
            ;

FormalParamsAux: COMMA Type ID FormalParamsAux{$$ = createNode("ParamDecl", ""); aux = createNode("Id", $3);
                                                addNode($$,$2); addBrother($2,aux); addBrother($$,$4);
                }
                |/*vazio*/ {$$ = NULL;}
                ;

MethodBody: LBRACE MethodBodyAux RBRACE {$$ = createNode("MethodBody", ""); addNode($$, $2);}
            ;

MethodBodyAux: Statement MethodBodyAux {if($1!=NULL){$$=$1; addBrother($$, $2);}else{$$=$2;}}
               |VarDecl MethodBodyAux  {$$=$1; addBrother($$,$2);}
               |/*vazio*/ {$$ = NULL;}
               ;

VarDecl: Type ID AdditionalDecl SEMICOLON {$$ = createNode("VarDecl", ""); addNode($$,$1); addBrother($1,createNode("Id", $2));
                                                                        if($3!=NULL){
                                                                                aux = $3;
                                                                                while(aux!= NULL){
                                                                                        node aux1 = createNode("VarDecl", "");
                                                                                        node aux2 = createNode($1->type, $1->info);
                                                                                        addNode(aux1,aux2);
                                                                                        addBrother(aux2, createNode("Id", aux->info));
                                                                                        addBrother($$,aux1);
                                                                                        aux= aux->brother;
                                                                                }
                                                                                free(aux);
                                                                        }
                                        }
        ;

Statement:LBRACE StatementAuxRec RBRACE {if(countBrothers($2)>1){aux = createNode("Block","");
        							$$=aux;
								addNode(aux,$2);
						}
						else{
							$$=$2;
        					}	
                                }
        |IF LPAR Expr RPAR Statement {$$=createNode("If",""); addNode($$,$3); aux = createNode("Block","");
					if(countBrothers($5)==1 && $5!=NULL){ 	addBrother($3,$5);
                                                                                addBrother($5,aux);
								}else{
									addBrother($3,aux);
									addNode(aux,$5);
									addBrother(aux,createNode("Block",""));
								}
                                }
        |IF LPAR Expr RPAR Statement ELSE Statement{$$=createNode("If",""); addNode($$,$3); 
					        	aux = createNode("Block","");
                                                        if(countBrothers($5)==1 && $5!=NULL){ 
								addBrother($3,$5);
								if(countBrothers($7)==1 && $7!=NULL){
									addBrother($5,$7);
								}else{
									addBrother($5,aux);
									addNode(aux,$7);
								}
							}else{
								addBrother($3,aux);
								addNode(aux,$5);
								if(countBrothers($7)==1 && $7!=NULL){
							        	addBrother(aux,$7);
								}else{
									aux2 = createNode("Block","");
									addBrother(aux,aux2);
									addNode(aux2,$7);
							        }
							}
                                                }
        |WHILE LPAR Expr RPAR Statement{$$=createNode("While",""); 
						addNode($$,$3);
						if(countBrothers($5)==1 && $5!=NULL){ 
							addBrother($3,$5);
						}else{
							aux = createNode("Block","");
							addBrother($3,aux);
							addNode(aux,$5);
						}
					}
        |RETURN StatementAux SEMICOLON {$$=createNode("Return","");addNode($$,$2);}
        |StatementAux1 SEMICOLON{$$ = $1;}
        |PRINT LPAR PrintAux RPAR SEMICOLON {$$=createNode("Print",""); addNode($$,$3);}
        |error SEMICOLON {$$=NULL; printError =1;}
        ;

PrintAux:STRLIT {$$=createNode("StrLit",$1);}
        |Expr {$$ = $1;}
        ;

StatementAux: Expr {$$ = $1;}
              |/*vazio*/  {$$ = NULL;}
              ;

StatementAux1: MethodInvocation {$$ = $1;}
               |Assignment {$$ = $1;}
               |ParseArgs {$$ = $1;}
               |/*vazio*/ {$$ = NULL;}
               ;

StatementAuxRec: Statement StatementAuxRec{if($1!=NULL){$$=$1; addBrother($$,$2);}else{$$=$2;}}
                 |/*vazio*/  {$$ = NULL;}
                 ;

AdditionalExpr: Expr AdditionalExpr1{$$ = $1; addBrother($$, $2);}
               |/*vazio*/ {$$ = NULL;}
        ;

AdditionalExpr1: COMMA Expr AdditionalExpr1{if($2!=NULL){$$=$2;addBrother($$,$3);}else{$$=$2;}}
               |/*vazio*/ {$$ = NULL;}
               
        ;

MethodInvocation:ID LPAR AdditionalExpr RPAR {$$=createNode("Call","");aux= createNode("Id",$1); addNode($$,aux); addBrother(aux,$3);}
                |ID LPAR error RPAR {$$= NULL; printError = 1;}
                ;

Assignment: ID ASSIGN Expr {$$=createNode("Assign",""); aux = createNode("Id",$1);addNode($$,aux); addBrother(aux,$3);}
            ;

ParseArgs: PARSEINT LPAR ID LSQ Expr RSQ RPAR {$$=createNode("ParseArgs",""); aux=createNode("Id",$3); addNode($$,aux); addBrother(aux,$5);}
           |PARSEINT LPAR error RPAR {$$ = NULL; printError = 1;}
        ;

ExprMath: ExprAux PLUS ExprAux   {$$=createNode("Add","");addNode($$,$1);addBrother($1,$3);}
    |     ExprAux MINUS ExprAux  {$$=createNode("Sub","");addNode($$,$1);addBrother($1,$3);}
    |     ExprAux STAR ExprAux   {$$=createNode("Mul","");addNode($$,$1);addBrother($1,$3);}
    |     ExprAux DIV ExprAux   {$$=createNode("Div","");addNode($$,$1);addBrother($1,$3);}
    |     ExprAux MOD ExprAux    {$$=createNode("Mod","");addNode($$,$1);addBrother($1,$3);}
    ;

ExprLogic:ExprAux AND ExprAux     {$$=createNode("And","");addNode($$,$1);addBrother($1,$3);}
        |ExprAux OR ExprAux  {$$=createNode("Or","");addNode($$,$1);addBrother($1,$3);}
        |ExprAux XOR ExprAux      {$$=createNode("Xor","");addNode($$,$1);addBrother($1,$3);}
        |ExprAux LSHIFT ExprAux {$$=createNode("Lshift","");addNode($$,$1);addBrother($1,$3);}
        |ExprAux RSHIFT ExprAux {$$=createNode("Rshift","");addNode($$,$1);addBrother($1,$3);}
        ;

ExprCompare:ExprAux EQ ExprAux    {$$=createNode("Eq","");addNode($$,$1);addBrother($1,$3);}
           |ExprAux GE ExprAux  {$$=createNode("Ge","");addNode($$,$1);addBrother($1,$3);}
           |ExprAux GT ExprAux  {$$=createNode("Gt","");addNode($$,$1);addBrother($1,$3);}
           |ExprAux LE ExprAux  {$$=createNode("Le","");addNode($$,$1);addBrother($1,$3);}
           |ExprAux LT ExprAux  {$$=createNode("Lt","");addNode($$,$1);addBrother($1,$3);}
           |ExprAux NE ExprAux  {$$=createNode("Ne","");addNode($$,$1);addBrother($1,$3);}
           ;

Expr: Assignment {$$ = $1;}
    |ExprAux {$$ = $1;}
    
    ;

ExprAux: ExprAux2 {$$ = $1;}
    |ExprMath  {$$ = $1;}
    | ExprCompare {$$ = $1;}
    | ExprLogic {$$ = $1;}
    | LPAR Expr RPAR  {$$ = $2;}
    | MINUS ExprAux %prec UNARY{$$=createNode("Minus","");addNode($$,$2);}
    | NOT ExprAux %prec UNARY{$$=createNode("Not","");addNode($$,$2);}
    | PLUS ExprAux %prec UNARY{$$=createNode("Plus","");addNode($$,$2);}
    | ID DOTLENGHT    {$$=createNode("Length","");addNode($$,createNode("Id",$1));}
    | ID      {$$=createNode("Id",$1);}
    | INTLIT  {$$=createNode("DecLit", $1);}
    | REALLIT {$$=createNode("RealLit", $1);}
    | BOOLLIT {$$=createNode("BoolLit", $1);}
    | LPAR error RPAR {$$ = NULL; printError = 1;}
        ;


ExprAux2: MethodInvocation   {$$ = $1;}
        | ParseArgs  {$$ = $1;}
%%

void yyerror (const char *s) { 
     printf ("Line %d, col %d: %s: %s\n",linha,(int)(coluna-strlen(yytext)), s, yytext);
}