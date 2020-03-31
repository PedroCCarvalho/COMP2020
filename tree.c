#include "tree.h"


node createNode(char* value){

    node newNode = malloc(sizeof(node));

    newNode->info = (char*)malloc(1+strlen(value)*sizeof(char));

    newNode->parent = NULL;
    newNode->child = NULL;
    newNode->brother = NULL;

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