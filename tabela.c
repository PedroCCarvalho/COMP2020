#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "tree.h"


noGlobal fazTabela(node root){
    node no = malloc(sizeof(no));
    no=root->child;
    noGlobal tabela = criaTabela(no->info);
    symbol method, methodAux;
    no=no->brother;
    node aux = no;
    while(aux!=NULL){
        node aux2 = aux;
        //printf("-%s-\n", aux->type);
        if(strcmp("FieldDecl", aux->type)==0){
            method = initMethod();
            aux2=aux->child;
            method->tipo=strdup(aux2->type);            
            aux2=aux2->brother;
            method->nome=strdup(aux2->info);
            method->isMethod=0;
            addSymbolToClass(tabela, method);
        }
        if(strcmp(aux->type, "MethodDecl")==0){
            aux2=aux->child;
            aux2=aux2->child;
            method = initMethod();
            method->tipo=strdup(aux2->type);
            aux2=aux2->brother;
            method->nome=strdup(aux2->info);
            aux2=aux2->brother;
            while(aux2!=NULL){
                methodAux=initMethod();
                methodAux->tipo = (char*)malloc(1+strlen(aux2->child->type)*sizeof(char));
                methodAux->tipo=strdup(aux2->child->type);
                methodAux->nome = (char*)malloc(1+strlen(aux2->child->brother->info)*sizeof(char));
                methodAux->tipo=strdup(aux2->child->brother->info);
                methodAux->isMethod=0;
                method=addSymbolToMethod(method, methodAux);
                aux2=aux2->brother;
            }
        }
        printf("boas\n");
        aux=aux->brother;
    }
    return tabela;
    
}

noGlobal criaTabela(char* nome){
    if(nome == NULL){
        strcpy(nome,"");
    }
    noGlobal tabela = malloc(sizeof(tabelaGlb));
    tabela->nome = (char*)malloc(1+strlen(nome)*sizeof(char));
    strcpy(tabela->nome, nome);
    tabela->symbols=NULL;
    return tabela;
}

noGlobal initTabela(){
    noGlobal tabela = malloc(sizeof(tabelaGlb));
    tabela->nome = NULL;
    tabela->symbols=NULL;
    return tabela;
}

symbol initMethod(){
    symbol method = malloc(sizeof(noTab));
    method->vars=NULL;
    method->method=NULL;
    method->irmao = NULL;
    method->isMethod=1;
    method->nome=NULL;
    method->tipo=NULL;

    return method;
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
        while(aux->irmao!=NULL){
            aux=aux->irmao;
        }
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
}    


