#include "tabela.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

noGlobal criaTabela(char* nome){
    tabela = (noGlobal)malloc(sizeof(noGlobal));
    tabela->nome = (char*)malloc(1+strlen(nome)*sizeof(char));
    strcpy(tabela->nome, nome);
    tabela->first=NULL;
    tabela->next=NULL;
    tabela->prev=NULL;
    return tabela;
}

noGlobal addFirst(char* nome, noGlobal pai){
    nodeTabela first = (nodeTabela)malloc(sizeof(nodeTabela));
    first->nome = (char*)malloc(1+strlen(nome)*sizeof(char));
    strcpy(first->nome, nome);
    first->prev = pai;
    first->filho = NULL;
    first->method = 1;
    first->nextTabela = NULL;
    first->param = 0;
    first->tipo = NULL;
    pai->first = first;
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



