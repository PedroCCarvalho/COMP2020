%{
//Cesário Ribeiro da Fonseca Andrade Silva - 2015230724
//Pedro Carreiro Carvalho - 2017267408

#include <stdio.h>
#include <string.h>
#include "y.tab.h"
#define LINHA linha++; coluna=1;
#define COLUNA coluna+=yyleng;

int flag = 0; 
int linha = 1;
int coluna = 1;
int c_actual=1;
int l_actual=1;
int error=0;
char save[256];

%}

%X STRINGLIT ML_COMMENT OL_COMMENT

numero               [0-9]
numNoZero            [1-9]+
ID                   ([A-Z]|[a-z]|_|"$")+ 
IDP                  ([A-Z]|[a-z]|_|"$"|[0-9])*
WHITESPACE           [\f|\t|" "]
UNDERSCORE           [_]*
CHAR                 [A-z]+
RESERVED             "Integer"|"System"|"null"|"abstract"|"assert"|"break"|"byte"|"case"|"catch"|"const"|"continue"|"default"|"do"|"enum"|"extends"|"final"|"finally"|"float"|"for"|"goto"|"implements"|"import"|"instanceof"|"interface"|"long"|"native"|"new"|"package"|"private"|"protected"|"short"|"strictfp"|"super"|"switch"|"synchronized"|"this"|"throw"|"throws"|"transient"|"try"|"volatile"|"finally"|"char"
QUOTE                \"
LETTER               [a-z]
SIGNAL               "+"|"-"
REALS                "."
EXPOENT              "e"|"E"
ESCAPE              \\n|\\f|\\r|\\\\|\\\"|\\t
STRLIT				([^\n\r\\\"]|{ESCAPE})*
OLCOMMENT            "//"
STARTCOMMENT         "/*"
FINISHCOMMENT        "*/"
LINETERMINATOR       \n|\r|\r\n
UNARY                "++"|"--"

 
%%

"|"                             {printf("Line %d, col %d: illegal character (%s)\n", linha, coluna, yytext);COLUNA;}

{OLCOMMENT}                     {BEGIN OL_COMMENT;}
<OL_COMMENT>{LINETERMINATOR}    {LINHA;BEGIN 0;}
<OL_COMMENT>.                   {COLUNA;}

{STARTCOMMENT}                  {c_actual = coluna; l_actual = linha;COLUNA;BEGIN(ML_COMMENT);}
<ML_COMMENT>{LINETERMINATOR}    {LINHA;}
<ML_COMMENT>.                   {COLUNA;}
<ML_COMMENT><<EOF>>             {printf("Line %d, col %d: unterminated comment\n", l_actual, c_actual); return 0;}
<ML_COMMENT>{FINISHCOMMENT}     {COLUNA;BEGIN 0;}

{RESERVED}       {if(flag==-1)printf("RESERVED(%s)\n", yytext);if(flag==2) return RESERVED;COLUNA;}
"false"          {if(flag==-1)printf("BOOLLIT(false)\n");if(flag==2) return BOOLLIT;COLUNA;}
"true"            {if(flag==-1)printf("BOOLLIT(true)\n");if(flag==2) return BOOLLIT;COLUNA;}
"&&"              {if(flag==-1)printf("AND\n");COLUNA; if(flag==2) return AND;}
"="               {if(flag==-1)printf("ASSIGN\n");COLUNA;if(flag==2) return ASSIGN;}
"*"               {if(flag==-1)printf("STAR\n");COLUNA;if(flag==2) return STAR;}
"/"               {if(flag==-1)printf("DIV\n");COLUNA;if(flag==2) return DIV;}
","               {if(flag==-1)printf("COMMA\n");COLUNA;if(flag==2) return COMMA;}
"=="              {if(flag==-1)printf("EQ\n");COLUNA;if(flag==2) return EQ;}
">"               {if(flag==-1)printf("GT\n");COLUNA;if(flag==2) return GT;}
">="              {if(flag==-1)printf("GE\n");COLUNA;if(flag==2) return GE;}
"{"               {if(flag==-1)printf("LBRACE\n");COLUNA;if(flag==2) return LBRACE;}
"<="              {if(flag==-1)printf("LE\n");COLUNA;if(flag==2) return LE;}
"("               {if(flag==-1)printf("LPAR\n");COLUNA;if(flag==2) return LPAR;}
"["               {if(flag==-1)printf("LSQ\n");COLUNA;if(flag==2) return LSQ;}
"<"               {if(flag==-1)printf("LT\n");COLUNA;if(flag==2) return LT;}
"-"               {if(flag==-1)printf("MINUS\n");COLUNA;if(flag==2) return MINUS;}
"%"               {if(flag==-1)printf("MOD\n");COLUNA;if(flag==2) return MOD;}
"!="              {if(flag==-1)printf("NE\n");COLUNA;if(flag==2) return NE;}
"!"               {if(flag==-1)printf("NOT\n");COLUNA;if(flag==2) return NOT;}
"||"              {if(flag==-1)printf("OR\n");COLUNA;if(flag==2) return OR;}
"+"               {if(flag==-1)printf("PLUS\n");COLUNA;if(flag==2) return PLUS;}
"}"               {if(flag==-1)printf("RBRACE\n");COLUNA;if(flag==2) return RBRACE;}
")"               {if(flag==-1)printf("RPAR\n");COLUNA;if(flag==2) return RPAR;}
"]"               {if(flag==-1)printf("RSQ\n");COLUNA;if(flag==2) return RSQ;}
";"               {if(flag==-1)printf("SEMICOLON\n");COLUNA;if(flag==2) return SEMICOLON;}
"->"              {if(flag==-1)printf("ARROW\n");COLUNA;if(flag==2) return ARROW;}
"<<"              {if(flag==-1)printf("LSHIFT\n");COLUNA;if(flag==2) return LSHIFT;}
">>"              {if(flag==-1)printf("RSHIFT\n");COLUNA;if(flag==2) return RSHIFT;}
"^"               {if(flag==-1)printf("XOR\n");COLUNA;if(flag==2) return XOR;}
"boolean"         {if(flag==-1)printf("BOOL\n");COLUNA;if(flag==2) return BOOL;}
"class"           {if(flag==-1)printf("CLASS\n");COLUNA;if(flag==2) return CLASS;}
".length"         {if(flag==-1)printf("DOTLENGTH\n");COLUNA;if(flag==2) return DOTLENGHT;}
"double"          {if(flag==-1)printf("DOUBLE\n");COLUNA;if(flag==2) return DOUBLE;}
"else"            {if(flag==-1)printf("ELSE\n");COLUNA;if(flag==2) return ELSE;}
"if"              {if(flag==-1)printf("IF\n");COLUNA;if(flag==2) return IF;}
"int"             {if(flag==-1)printf("INT\n");COLUNA;if(flag==2) return INT;}
"System.out.print"    {if(flag==-1)printf("PRINT\n");COLUNA;if(flag==2) return PRINT;}
"Integer.parseInt"    {if(flag==-1)printf("PARSEINT\n");COLUNA;if(flag==2) return PARSEINT;}
"public"          {if(flag==-1)printf("PUBLIC\n");COLUNA;if(flag==2) return PUBLIC;}
"static"          {if(flag==-1)printf("STATIC\n");COLUNA;if(flag==2) return STATIC;}
"String"          {if(flag==-1)printf("STRING\n");COLUNA;if(flag==2) return STRING;}
"void"            {if(flag==-1)printf("VOID\n");COLUNA;if(flag==2) return VOID;}
"while"           {if(flag==-1)printf("WHILE\n");COLUNA;if(flag==2) return WHILE;}
"return"          {if(flag==-1)printf("RETURN\n");COLUNA;if(flag==2) return RETURN;}

{QUOTE}												{BEGIN STRINGLIT; strcat(save, yytext); l_actual= linha; c_actual= coluna;COLUNA; error=0;}
<STRINGLIT>{STRLIT}									{COLUNA; strcat(save, yytext);}
<STRINGLIT>\\(.?)									{printf("Line %d, col %d: invalid escape sequence (%s)\n", linha, coluna, yytext);COLUNA;error=1;}
<STRINGLIT>{QUOTE}									{BEGIN 0; strcat(save, yytext); if(error==0){if(flag==-1)printf("STRLIT(%s)\n",save);} COLUNA;save[0]=0;}
<STRINGLIT><<EOF>>									{BEGIN 0; save[0]=0; printf("Line %d, col %d: unterminated string literal\n", l_actual, c_actual);LINHA;}
<STRINGLIT>{LINETERMINATOR}                                      {printf("Line %d, col %d: unterminated string literal\n", linha, c_actual);LINHA;BEGIN 0; save[0]=0;}

{WHITESPACE}           {COLUNA;}
{LINETERMINATOR}       {LINHA;}
"0"             {if(flag==-1)printf("INTLIT(0)\n");COLUNA;if(flag==2) return INTLIT;}
{numNoZero}{numero} {if(flag==-1)printf("INTLIT(%s)\n", yytext);COLUNA;if(flag==2) return INTLIT;}
((({UNDERSCORE}?{numero}+)+({REALS})?({UNDERSCORE}?{numero}+)*)|(({UNDERSCORE}?{numero}+)*({REALS})?({UNDERSCORE}?{numero}+)+)){EXPOENT}{SIGNAL}?({UNDERSCORE}?{numero}+)+     {if(flag==-1)printf("REALLIT(%s)\n", yytext);COLUNA;if(flag==2) return REALLIT;}
({UNDERSCORE}?{numero}+)*{REALS}({UNDERSCORE}?{numero}+)+      {if(flag==-1)printf("REALLIT(%s)\n", yytext);COLUNA;if(flag==2) return REALLIT;}
({UNDERSCORE}?{numero}+)+{REALS}({UNDERSCORE}?{numero}+)*      {if(flag==-1)printf("REALLIT(%s)\n", yytext);COLUNA;if(flag==2) return REALLIT;}
{numNoZero}({UNDERSCORE}{numero}+)*     {if(flag==-1)printf("INTLIT(%s)\n", yytext);COLUNA;if(flag==2) return INTLIT;}
{ID}{IDP}                 {if(flag==-1)printf("ID(%s)\n", yytext);COLUNA;if(flag==2) return ID;}



.                         {printf("Line %d, col %d: illegal character (%s)\n", linha, coluna, yytext);COLUNA;}

%%

void yyerror (const char *s) { 
     printf ("Line %d, col %d: %s: %s\n",linha,(int)(coluna-strlen(yytext)), s, yytext);
}

int main(int argc, char *argv[]){
    
    if(argc > 1){

        if(strcmp(argv[1],"-l") == 0){
            flag = - 1;
        }

        if(strcmp(argv[1],"-e1") == 0){
            flag = 1;
        }

        if(strcmp(argv[1],"-e2") == 0){
            flag = 2;
        }
    }

    yylex();
    return 0;
}

int yywrap(){
    return 1;
}