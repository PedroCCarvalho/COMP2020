#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

typedef struct noTab* symbol;
typedef struct noTab{
    char* nome;
    char* tipo;
    int isMethod;
    int isParams;
    symbol irmao;
    symbol vars;
    symbol method; 
}noTab;

typedef struct tabelaGlb* noGlobal;
typedef struct tabelaGlb{
    char* nome;
    symbol symbols;
    noGlobal next;
    noGlobal prev;
}tabelaGlb;


noGlobal criaTabela(char* nome, noGlobal tabela);
noGlobal addClass(char* nome, noGlobal prev);
symbol createMethod(char* nome, char* tipo);
symbol createVar(char* nome, char* tipo);
noGlobal addSymbolToClass(noGlobal pai, symbol filho);
symbol addSymbolToMethod(symbol method, symbol var);
void printTabela(noGlobal tabela);
noGlobal initTabela();




