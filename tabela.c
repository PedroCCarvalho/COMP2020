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

noGlobal addFirst(char* nome, noGlobal pai){
    method first = (method)malloc(sizeof(method));
    first->nome = (char*)malloc(1+strlen(nome)*sizeof(char));
    strcpy(first->nome, nome);
    first->pai = pai;
    first->filhos = NULL;
    first->nextMethod = NULL;
    first->tipo = NULL;
    pai->methods = first;
    return pai;
}

nodeTabela methodTable(nodeTabela pai, char* nome, int isMethod, int isParam){
    nodeTabela no = (nodeTabela)malloc(sizeof(nodeTabela));
    no->nome = (char*)malloc(1+strlen(nome)*sizeof(char));
    strcpy(no->nome, nome);
    no->prev = pai;
    no->tipo = (char*)malloc(1+strlen(nome)*sizeof(char));
    strcpy(no->tipo, "void");
    if(isMethod==1){
        no->method=1;
        no->param=0;
    }else{
        no->method=0;
        if(isParam==1){
            no->param=1;
        }
    }
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



