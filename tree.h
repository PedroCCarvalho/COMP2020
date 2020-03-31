#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>


typedef struct  no* node;
typedef struct no{
    
    node brother;
    node child;
    node parent;

    char *info;

    int nChildren;

}no;


node createNode(char* value);
void addNode(node parent, node nodeAdd);
void addBrother(node treeNode, node brother);

