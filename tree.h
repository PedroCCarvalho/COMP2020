#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

//ast
typedef struct  no* node;
typedef struct no{
    
    node brother;
    node child;
    node parent;

    char* info;
    char* type;

    int nChildren;

}no;

//symbol table
typedef struct noTab* symbol;
typedef struct noTab{

    char* nome;
    char* tipo;
    int isMethod;
    symbol irmao;
    symbol vars;
    symbol method; 

}noTab;

typedef struct tabelaGlb* noGlobal;
typedef struct tabelaGlb{

    char* nome;
    symbol symbols;

}tabelaGlb;

//ast
node createNode(char* type, char* value);
void addNode(node parent, node nodeAdd);
void addBrother(node treeNode, node brother);
int countSons(node root);
int countBrothers(node root);
void printTree(node root, int depth);

//symbol table
noGlobal criaTabela(char* nome);
symbol createMethod(char* nome, char* tipo);
symbol createVar(char* nome, char* tipo);
noGlobal addSymbolToClass(noGlobal pai, symbol filho);
symbol addVarToMethod(symbol  method, symbol var);
symbol addSymbolToMethod(symbol method, symbol var);
void printTabela(noGlobal tabela);
noGlobal initTabela();
symbol initMethod();
noGlobal fazTabela(node root);