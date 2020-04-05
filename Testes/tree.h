#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>


typedef struct  no* node;
typedef struct no{
    
    node brother;
    node child;
    node parent;

    char* info;
    char* type;

    int nChildren;

}no;


node createNode(char* type, char* value);
void addNode(node parent, node nodeAdd);
void addBrother(node treeNode, node brother);
int countSons(node root);
int countBrothers(node root);
void printTree(node root, int depth);