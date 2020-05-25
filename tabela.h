#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct tabelaGlb* noGlobal;
typedef struct tabelaGlb{
    char* nome;
    method methods;

    noGlobal next;
    noGlobal prev;
}tabelaGlb;

typedef struct noMethod* method;
typedef struct noMethod{
    char* nome;
    char* tipo;
    var filhos;
    method nextMethod;
    noGlobal pai; 
}noTabela;

typedef struct noVar* var;
typedef struct noVar{
    char* nome;
    char* tipo;
    int param;
    var nextFilho;
    method pai;
}noVar;




