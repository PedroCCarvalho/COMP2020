#include "tabela.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

noGlobal criaTabela(char* nome){
    noGlobal tabela = (noGlobal)malloc(sizeof(noGlobal));
    tabela->nome = (char*)malloc(1+strlen(nome)*sizeof(char));
    strcpy(tabela->nome, nome);
    tabela->symbols=NULL;
    tabela->next=NULL;
    tabela->prev=NULL;
    return tabela;
}

symbol createMethod(char* nome, char* tipo, noGlobal pai){
    symbol no = (symbol)malloc(sizeof(symbol));
    no->nome = (char*)malloc(1+strlen(nome)*sizeof(char));
    strcpy(no->nome, nome);
    no->tipo = (char*)malloc(1+strlen(nome)*sizeof(char));
    strcpy(no->tipo, tipo);
    no->classe = pai;
    no->vars = NULL;
    no->irmao = NULL;
    no->isMethod=1;
    no->isParams=0;
    no->method=NULL;
    return no;
}

symbol createVar(char* nome, char* tipo, symbol method){
    symbol no = (symbol)malloc(sizeof(symbol));
    no->nome = (char*)malloc(1+strlen(nome)*sizeof(char));
    strcpy(no->nome, nome);
    no->tipo = (char*)malloc(1+strlen(nome)*sizeof(char));
    strcpy(no->tipo, tipo);
    no->classe=NULL;
    no->vars=NULL;
    no->irmao=NULL;
    no->isMethod=0;
    no->isParams=0;
    no->method=method;
}

noGlobal addSymbolToClass(noGlobal pai, symbol filho){
    symbol aux = (symbol)malloc(sizeof(symbol));
    aux=pai->symbols;
    if(pai->symbols!=NULL){
        while(aux->irmao!=NULL){
            aux=aux->irmao;
        }
        aux->irmao=filho;
        return pai;
    }else{
        pai->symbols=filho;
    }
}

symbol addSymbolToMethod(symbol method, symbol var){
    symbol aux = (symbol)malloc(sizeof(symbol));
    aux=method->vars;
    if(aux!=NULL){
        while(aux->irmao!=NULL){
            aux=aux->irmao;
        }
        aux->irmao=var;
        return method;
    }else{
        method->vars=var;
    }
}


void printTabela(noGlobal no){
    
}



