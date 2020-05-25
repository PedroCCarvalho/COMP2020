#include "tabela.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

noGlobal criaTabela(char* nome){
    noGlobal tabela = (noGlobal)malloc(sizeof(noGlobal));
    tabela->nome = (char*)malloc(1+strlen(nome)*sizeof(char));
    strcpy(tabela->nome, nome);
    tabela->methods=NULL;
    tabela->next=NULL;
    tabela->prev=NULL;
    return tabela;
}

method addFirst(char* tipo, noGlobal pai){
    method first = (method)malloc(sizeof(method));
    first->tipo = (char*)malloc(1+strlen(tipo)*sizeof(char));
    strcpy(first->tipo, tipo);
    first->pai = pai;
    first->filhos = NULL;
    first->nextMethod = NULL;
    first->tipo = NULL;
    pai->methods = first;
    return first;
}

method methodTable(method no, char* tipo){
    no->nome = (char*)malloc(1+strlen(nome)*sizeof(char));
    strcpy(no->nome, nome);
    no->tipo = (char*)malloc(1+strlen(nome)*sizeof(char));
    strcpy(no->tipo, "void");
    
}

noGlobal returnPai(nodeTabela no, int tipo){
    nodeTabela aux = (nodeTabela)malloc(sizeof(nodeTabela));
    switch(tipo){
        case 1:
        while(no->prev!=NULL){
            no=no->prev;
        }
    }
}



