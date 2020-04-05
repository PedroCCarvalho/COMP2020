#include "tree.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

int main(){

    printf("Teste\n");

    node treeroot = createNode("Program", "");
    node firstChild = createNode("SouOPrimeiro", "");
    node firstBrother = createNode("SouOIrmao", "");
    node secondeChild = createNode("SouONeto", "");

    printf("Criei nos\n");

    addNode(treeroot, firstChild);
    
    printf("Adicionei Child\n");
    
    addBrother(firstChild, firstBrother);

    printf("Adicionei Brother\n");

    addNode(firstChild,secondeChild);

    printTree(treeroot, 0);

    printf("Imprimi a arvore\n");

   
}


node createNode(char* type, char* value){

    node newNode = malloc(sizeof(node));

   
    newNode->info = (char*)malloc(1+strlen(value)*sizeof(char));
    strcpy(newNode->info, value);
    

    newNode->type = (char*)malloc(1+strlen(type)*sizeof(char));
    strcpy(newNode->type, type);

    

    newNode->parent = NULL;
    newNode->child = NULL;
    newNode->brother = NULL;
    newNode->nChildren = 0;

    return newNode;
}

void addNode(node parent, node nodeAdd){

    if(nodeAdd == NULL){
        return;
    }

    parent->child = nodeAdd;
    nodeAdd->parent = parent;

}

void addBrother(node treeNode, node brother){
    if((treeNode == NULL) || (brother == NULL) ){
        return;
    }

    node aux;
    aux = treeNode;
    while(aux->brother != NULL){
    
        aux = aux->brother;
    
    }

    aux->brother = brother;

    if(treeNode->parent != NULL){

        brother->parent = treeNode->parent;
        treeNode->parent->nChildren += 1;
    
    }

}

int countSons(node root){
    int n = 0;
    node aux;
    aux = root;

    while(aux != NULL){
        aux = aux->child;
        n++;
    }

    return n;
}

int countBrothers(node root){
    int n = 0;
    node aux;
    aux = root;

    while(aux != NULL){
        aux = aux->brother;
        n++;
    }

    return n;
}


void printTree(node root, int depth){
    if(root == NULL){
        return;
    }

    int i = 0;
    node aux;

    if(strcmp(root->type, "Program") == 0){
        printf("%s\n", root->type);
    }
    else{
        while(i<depth){
            printf("..");
            i++;
        }
        if(strcmp(root->info,"")!=0)
			printf("%s(%s)\n", root->type, root->info);
		else
			printf("%s\n", root->type);
    }

    aux = root->child;

    while(aux!= NULL){
        node freeN = aux;
        printTree(aux, depth+1);
        aux = aux->brother;
        
        free(freeN);
        
    }

}