%{
//Cesário Ribeiro da Fonseca Andrade Silva - 2015230724
//Pedro Carreiro Carvalho - 2017267408
int flag = 0, linha=1, coluna=1; 
%}

numero               [0-9]
numNoZero            [1-9]+
ID                   ([A-Z]|[a-z])+ 
IDP                  ([A-Z]|[a-z]|_|"$"|[0-9])*
WHITESPACE           [\f|\t| ]
UNDERSCORE           [_]*
CHAR                 [A-z]+
RESERVED             "++"|"--"|"Integer"|"System"|"null"|"abstract"|"assert"|"break"|"byte"|"case"|"catch"|"const"|"continue"|"do"|"enum"|"extends"|"final"|"finnaly"|"float"|"for"|"goto"|"implements"|"import"|"instanceof"|"interface"|"long"|"native"|"new"|"package"|"private"|"protected"|"short"|"strictfp"|"super"|"switch"|"synchronized"|"this"|"throw"|"throws"|"transient"|"try"|"volatile"
QUOTE                ["]
OLCOMMENT            [//]
STARTCOMMENT         [/*]
FINISHCOMMENT        [*/]
LINETERMINATOR       [\n]

%xML_COMMENT

%%

{RESERVED}       {if(flag==-1)printf("RESERVED\n");}
"false"          {if(flag==-1)printf("BOOLIT(false)\n");}
"true"            {if(flag==-1)printf("BOOLIT(true)\n");}
"&&"              {if(flag==-1)printf("AND\n");}
"="               {if(flag==-1)printf("ASSIGN\n");}
"*"               {if(flag==-1)printf("STAR\n");}
"/"               {if(flag==-1)printf("DIV\n");}
","               {if(flag==-1)printf("COMMA\n");}
"=="              {if(flag==-1)printf("EQ\n");}
">="              {if(flag==-1)printf("GE\n");}
">"               {if(flag==-1)printf("GT2\n");}
"{"               {if(flag==-1)printf("LBRACE\n");}
"<="              {if(flag==-1)printf("LE\n");}
"("               {if(flag==-1)printf("LPAR\n");}
"["               {if(flag==-1)printf("LSQ\n");}
"<"               {if(flag==-1)printf("LT\n");}
"-"               {if(flag==-1)printf("MINUS\n");}
"%"               {if(flag==-1)printf("MOD\n");}
"!="              {if(flag==-1)printf("NE\n");}
"!"               {if(flag==-1)printf("NOT\n");}
"||"              {if(flag==-1)printf("OR\n");}
"+"               {if(flag==-1)printf("PLUS\n");}
"}"               {if(flag==-1)printf("RBRACE\n");}
")"               {if(flag==-1)printf("RPAR\n");}
"]"               {if(flag==-1)printf("RSQ\n");}
";"               {if(flag==-1)printf("SEMICOLON\n");}
"->"              {if(flag==-1)printf("ARROW\n");}
"<<"              {if(flag==-1)printf("LSHIFT\n");}
">>"              {if(flag==-1)printf("RSHIFT\n");}
"^"               {if(flag==-1)printf("XOR\n");}
"boolean"         {if(flag==-1)printf("BOOL\n");}
"class"           {if(flag==-1)printf("CLASS\n");}
".length"         {if(flag==-1)printf("DOTLENGTH\n");}
"double"          {if(flag==-1)printf("DOUBLE\n");}
"else"            {if(flag==-1)printf("ELSE\n");}
"if"              {if(flag==-1)printf("IF\n");}
"int"             {if(flag==-1)printf("INT\n");}
"System.out.print"    {if(flag==-1)printf("PRINT\n");}
"Integer.parseInt"    {if(flag==-1)printf("PARSEINT\n");}
"public"          {if(flag==-1)printf("PUBLIC\n");}
"static"          {if(flag==-1)printf("STATIC\n");}
"String"          {if(flag==-1)printf("STRING\n");}
"void"            {if(flag==-1)printf("VOID\n");}
"while"           {if(flag==-1)printf("WHILE\n");}
"return"          {if(flag==-1)printf("RETURN\n");}
{QUOTE}{CHAR}{QUOTE}          {printf("if(flag==-1)STRLIT(%s)\n", yytext);}
{WHITESPACE}           {;}
"\n"                {;}
"\r"                {;}
"\r\n"              {;}
{QUOTE}             {;}
"0"             {if(flag==-1)printf("INTLIT(0)\n");}
{numNoZero}{numero} {if(flag==-1)printf("INTLIT(%s)\n", yytext);}
{numNoZero}({UNDERSCORE}{numero}+)* {if(flag==-1)printf("INTLIT(%s)\n", yytext);}
{ID}{IDP}       {if(flag==-1)printf("ID(%s)\n", yytext);}

<<EOF>>               {return 0;}


{SINGLECOMMENT}.*         {;}
{STARTCOMMENT}            {BEGIN(ML_COMMENT);}
<ML_COMMENT>.             {coluna++;}
<ML_COMMENT>{LINETERMINATOR}              {linha++; coluna=1}
<ML_COMMENT><<EOF>>       {BEGIN 0; printf("Unterminated comment on Line %d, col %d\n", linha, coluna);}
<ML_COMMENT>{FINISHCOMMENT}     {BEGIN 0;}
%%

int main(int argc, char *argv[]){
    
    if(argc > 1){

        if(strcmp(argv[1],"-l") == 0){
            flag = - 1;
        }
    }

    yylex();
    return 0;
}

int yywrap(){
    return 1;
}