%{
//Cesário Ribeiro da Fonseca Andrade Silva - 2015230724
//Pedro Carreiro Carvalho - 2017267408

#include <stdio.h>
#include <string.h>
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

%X STRINGLIT ML_COMMENT

numero               [0-9]
numNoZero            [1-9]+
ID                   ([A-Z]|[a-z]|_|"$")+ 
IDP                  ([A-Z]|[a-z]|_|"$"|[0-9])*
WHITESPACE           [\f|\t|" "|"\"|"\\"]
UNDERSCORE           [_]*
CHAR                 [A-z]+
RESERVED             "++"|"--"|"Integer"|"System"|"null"|"abstract"|"assert"|"break"|"byte"|"case"|"catch"|"const"|"continue"|"default"|"do"|"enum"|"extends"|"final"|"finnaly"|"float"|"for"|"goto"|"implements"|"import"|"instanceof"|"interface"|"long"|"native"|"new"|"package"|"private"|"protected"|"short"|"strictfp"|"super"|"switch"|"synchronized"|"this"|"throw"|"throws"|"transient"|"try"|"volatile"|"finally"|"char"
QUOTE                \"
LETTER               [a-z]
SIGNAL               "+"|"-"
ILLEGAL              "."|"#"|"º"|"ª"|"~"|"^"|"¨"|"«"|"»"
REALS                "."|","
EXPOENT              "e"|"E"
ESCAPE              \\n|\\f|\\r|\\\\|\\\"|\\t
NOESCAPE            \\.
STRLIT				([^\n\r\\\"]|{ESCAPE})*
OLCOMMENT            "//"
STARTCOMMENT         "/*"
FINISHCOMMENT        "*/"
LINETERMINATOR       \n|\r|\r\n


%%

{RESERVED}       {if(flag==-1)printf("RESERVED(%s)\n", yytext);COLUNA;}
"false"          {if(flag==-1)printf("BOOLLIT(false)\n");COLUNA;}
"true"            {if(flag==-1)printf("BOOLLIT(true)\n");COLUNA;}
"&&"              {if(flag==-1)printf("AND\n");COLUNA;}
"="               {if(flag==-1)printf("ASSIGN\n");COLUNA;}
"*"               {if(flag==-1)printf("STAR\n");COLUNA;}
"/"               {if(flag==-1)printf("DIV\n");COLUNA;}
","               {if(flag==-1)printf("COMMA\n");COLUNA;}
"=="              {if(flag==-1)printf("EQ\n");COLUNA;}
">="              {if(flag==-1)printf("GE\n");COLUNA;}
">"               {if(flag==-1)printf("GT\n");COLUNA;}
"{"               {if(flag==-1)printf("LBRACE\n");COLUNA;}
"<="              {if(flag==-1)printf("LE\n");COLUNA;}
"("               {if(flag==-1)printf("LPAR\n");COLUNA;}
"["               {if(flag==-1)printf("LSQ\n");COLUNA;}
"<"               {if(flag==-1)printf("LT\n");COLUNA;}
"-"               {if(flag==-1)printf("MINUS\n");COLUNA;}
"%"               {if(flag==-1)printf("MOD\n");COLUNA;}
"!="              {if(flag==-1)printf("NE\n");COLUNA;}
"!"               {if(flag==-1)printf("NOT\n");COLUNA;}
"||"              {if(flag==-1)printf("OR\n");COLUNA;}
"+"               {if(flag==-1)printf("PLUS\n");COLUNA;}
"}"               {if(flag==-1)printf("RBRACE\n");COLUNA;}
")"               {if(flag==-1)printf("RPAR\n");COLUNA;}
"]"               {if(flag==-1)printf("RSQ\n");COLUNA;}
";"               {if(flag==-1)printf("SEMICOLON\n");COLUNA;}
"->"              {if(flag==-1)printf("ARROW\n");COLUNA;}
"<<"              {if(flag==-1)printf("LSHIFT\n");COLUNA;}
">>"              {if(flag==-1)printf("RSHIFT\n");COLUNA;}
"^"               {if(flag==-1)printf("XOR\n");COLUNA;}
"boolean"         {if(flag==-1)printf("BOOL\n");COLUNA;}
"class"           {if(flag==-1)printf("CLASS\n");COLUNA;}
".length"         {if(flag==-1)printf("DOTLENGTH\n");COLUNA;}
"double"          {if(flag==-1)printf("DOUBLE\n");COLUNA;}
"else"            {if(flag==-1)printf("ELSE\n");COLUNA;}
"if"              {if(flag==-1)printf("IF\n");COLUNA;}
"int"             {if(flag==-1)printf("INT\n");COLUNA;}
"System.out.print"    {if(flag==-1)printf("PRINT\n");COLUNA;}
"Integer.parseInt"    {if(flag==-1)printf("PARSEINT\n");COLUNA;}
"public"          {if(flag==-1)printf("PUBLIC\n");COLUNA;}
"static"          {if(flag==-1)printf("STATIC\n");COLUNA;}
"String"          {if(flag==-1)printf("STRING\n");COLUNA;}
"void"            {if(flag==-1)printf("VOID\n");COLUNA;}
"while"           {if(flag==-1)printf("WHILE\n");COLUNA;}
"return"          {if(flag==-1)printf("RETURN\n");COLUNA;}

{QUOTE}												{BEGIN STRINGLIT; strcat(save, yytext); l_actual= linha; c_actual= coluna;COLUNA; error=0;}
<STRINGLIT>{QUOTE}									{BEGIN 0;  strcat(save, yytext); if(error==0){printf("STRLIT(%s)\n",save);} COLUNA;save[0]=0;}
<STRINGLIT>{STRLIT}									{COLUNA; strcat(save, yytext);}
<STRINGLIT>\\(.?)									{printf("Line %d, col %d: invalid escape sequence (%s)\n", linha, coluna, yytext);COLUNA;error=1;}
<STRINGLIT>{LINETERMINATOR}                         {BEGIN 0;linha++; coluna=1;printf("Line %d, col %d: unterminated string literal\n", l_actual, c_actual);save[0]=0;}

{WHITESPACE}           {COLUNA;}
"\n"                {LINHA;}
"\r"                {LINHA;}
"\r\n"              {LINHA;}
"0"             {if(flag==-1)printf("INTLIT(0)\n");COLUNA;}
{numNoZero}{numero} {if(flag==-1)printf("INTLIT(%s)\n", yytext);COLUNA;}
((({UNDERSCORE}?{numero}+)+({REALS})?({UNDERSCORE}?{numero}+)*)|(({UNDERSCORE}?{numero}+)*({REALS})?({UNDERSCORE}?{numero}+)+)){EXPOENT}{SIGNAL}?({UNDERSCORE}?{numero}+)+     {if(flag==-1)printf("REALLIT(%s)\n", yytext);COLUNA;}
({UNDERSCORE}?{numero}+)*{REALS}({UNDERSCORE}?{numero}+)+      {if(flag==-1)printf("REALLIT(%s)\n", yytext);COLUNA;}
({UNDERSCORE}?{numero}+)+{REALS}({UNDERSCORE}?{numero}+)*     {if(flag==-1)printf("REALLIT(%s)\n", yytext);COLUNA;}
{numNoZero}({UNDERSCORE}{numero}+)*     {if(flag==-1)printf("INTLIT(%s)\n", yytext);COLUNA;}
{ID}{IDP}               {if(flag==-1)printf("ID(%s)\n", yytext);COLUNA;}
{ILLEGAL}               {printf("Line %d, col %d: illegal character (%s)\n", linha, coluna, yytext);COLUNA;}


{OLCOMMENT}.*                     {linha++;coluna+=yyleng;}



{STARTCOMMENT}                  {BEGIN(ML_COMMENT);}
<ML_COMMENT>{LINETERMINATOR}   {linha++; coluna=1;}
<ML_COMMENT>.                   {coluna++;}
<ML_COMMENT><<EOF>>             {BEGIN 0; printf("Line %d, col %d: unterminated comment\n", coluna, linha);}
<ML_COMMENT>{FINISHCOMMENT}     {BEGIN 0;}

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
    }

    yylex();
    return 0;
}

int yywrap(){
    return 1;
}