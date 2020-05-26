#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "tabela.h"

noGlobal criaTabela(char* nome, noGlobal tabela){
    if(nome == NULL){
        strcpy(nome,"");
    }
    tabela->nome = (char*)malloc(1+strlen(nome)*sizeof(char));
    strcpy(tabela->nome, nome);
    return tabela;
}

noGlobal initTabela(){
    noGlobal tabela = malloc(sizeof(tabelaGlb));
    tabela->nome = NULL;
    tabela->symbols=NULL;
    tabela->next=NULL;
    tabela->prev=NULL;
    return tabela;
}

symbol initMethod(){
    symbol method = malloc(sizeof(noTab));
    method->vars=NULL;
    method->method=NULL;
    method->irmao = NULL;
    method->isMethod=1;
    method->isParams=0;
    method->nome=NULL;
    method->tipo=NULL;

    return method;
}

noGlobal addClass(char* nome, noGlobal prev){
    if(prev == NULL){
        return NULL;
    }
    noGlobal classe = malloc(sizeof(tabelaGlb));
    classe = criaTabela(nome,classe);
    classe->prev=prev;
    classe->symbols=NULL;
    prev->next=classe;
    return classe;

}


symbol createMethod(char* nome, char* tipo){
    if(nome == NULL){
        strcpy(nome, "");
    }

    if(tipo == NULL){
        strcpy(tipo, "");
    }
    symbol no = malloc(sizeof(noTab));
    no->nome = (char*)malloc(1+strlen(nome)*sizeof(char));
    strcpy(no->nome, nome);
    no->tipo = (char*)malloc(1+strlen(tipo)*sizeof(char));
    strcpy(no->tipo, tipo);
    no->vars = NULL;
    no->irmao = NULL;
    no->isMethod=1;
    no->isParams=0;
    no->method=NULL;

    return no;
}

symbol createVar(char* nome, char* tipo){
    if(nome == NULL){
        strcpy(nome, "");
    }

    if(tipo == NULL){
        strcpy(tipo, "");
    }
    symbol no = malloc(sizeof(noTab));
    no->nome = (char*)malloc(1+strlen(nome)*sizeof(char));
    strcpy(no->nome, nome);
    no->tipo = (char*)malloc(1+strlen(nome)*sizeof(char));
    strcpy(no->tipo, tipo);
    no->vars=NULL;
    no->irmao=NULL;
    no->isMethod=0;
    no->isParams=0;

    return no;
}

noGlobal addSymbolToClass(noGlobal pai, symbol filho){
    if(filho == NULL){
        return NULL;
    }
    if(pai == NULL){
        return NULL;
    }
    
    symbol aux = pai->symbols;
    if(aux!=NULL){
        while(aux->irmao!=NULL){
            aux=aux->irmao;
        }
        aux->irmao=filho;
        return pai;
    }else{
        pai->symbols=filho;
        return pai;
    }
}

symbol addSymbolToMethod(symbol method, symbol var){
    if(method == NULL){
        return NULL;
    }
    if(var == NULL){
        return NULL;
    }
    symbol aux = malloc(sizeof(noTab));
    aux=method->vars;
    var->method=method;
    if(aux!=NULL){
        var->irmao=aux;
        method->vars=var;
        return method;
    }else{
        method->vars=var;
    }

    return method;
}

symbol addVarToMethod(symbol  method, symbol var){
    if(method == NULL){
        return NULL;
    }
    if(var == NULL){
        return NULL;
    }
    symbol aux = malloc(sizeof(noTab));

    aux= method->method;
    if(aux!=NULL){
        var->irmao=aux;
        method->method=var;
        return method;
    }else{
        method->method=var;
    }

    return method;
}


void printTabela(noGlobal no){
     if(no == NULL){
        return;
    }
    noGlobal aux = no;
    symbol symbolAux, paramAux;
    while(aux != NULL){
        printf("==== Class %s Symbol Table ====\n", aux->nome);
        symbolAux=aux->symbols;
        while(symbolAux != NULL){
            printf("%s\t",symbolAux->nome);
            if(symbolAux->vars != NULL){
                    printf("(");
                    paramAux = symbolAux->vars;
                    while(paramAux != NULL){
                        printf("%s ",paramAux->tipo);
                        paramAux = paramAux->irmao;    
                    }        
                    printf(")\t");
            }
            printf("%s\n",symbolAux->tipo);
            symbolAux=symbolAux->irmao;
        }
        symbolAux = aux->symbols;
        while(symbolAux != NULL){
            if(symbolAux->isMethod==1){
                 printf("==== Method %s Symbol Table ====\n", symbolAux->nome);
                printf("return\t%s\n", symbolAux->tipo); 
                paramAux = symbolAux->method;
                while(paramAux != NULL){
                    printf("%s\t%s param\n",paramAux->nome, paramAux->tipo);
                    paramAux = paramAux->irmao;    
                } 
            }
            symbolAux = symbolAux->irmao;
        }
        aux=aux->next;
    }
}    


