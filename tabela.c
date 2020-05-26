#include "tabela.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

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

/*noGlobal addClass(char* nome, noGlobal prev){
    if(prev == NULL){
        return NULL;
    }
    noGlobal classe = malloc(sizeof(tabelaGlb));
    classe = criaTabela(nome);
    classe->prev=prev;
    classe->symbols=NULL;
    prev->next=classe;
    return classe;

}*/


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

symbol createVar(char* nome, char* tipo, symbol method){
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
    no->method=method;
}

noGlobal addSymbolToClass(noGlobal pai, symbol filho){
    if(filho == NULL){
        return NULL;
    }
    if(pai == NULL){
        return NULL;
    }
    
    
    symbol aux = malloc(sizeof(noTab));
    if(pai->symbols!=NULL){
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
    symbol aux = 
    malloc(sizeof(noTab));
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
     if(no == NULL){
        return;
    }
    noGlobal aux = no;
    symbol symbolAux, paramAux;
    while(aux != NULL){
        printf("==== Class %s Symbol Table ====\n", aux->nome);
        symbolAux=aux->symbols;
        while(symbolAux != NULL){
            //printf("boas");
            printf("%s\t",symbolAux->nome);
            if(symbolAux->isMethod==1){
                if(symbolAux->vars != NULL){
                    printf("(");
                    paramAux = symbolAux->vars;
                    while(paramAux != NULL){
                        printf("%s",paramAux->nome);
                        paramAux = paramAux->irmao;
                    }        
                    printf(")");
                }
            }else{
                printf("%s\t",symbolAux->nome);
            }
            printf("\t%s",symbolAux->tipo);
            symbolAux=symbolAux->irmao;
        }
        aux=aux->next;
    }
}



