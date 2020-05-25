#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct tabelaGlb* noGlobal;
typedef struct tabelaGlb{
    char* nome;
    symbol symbols;
    noGlobal next;
    noGlobal prev;
}tabelaGlb;

typedef struct noTab* symbol;
typedef struct noTab{
    char* nome;
    char* tipo;
    int isMethod;
    int isParams;
    noGlobal classe;
    symbol irmao;
    symbol vars;
    symbol method; 
}noTab;





