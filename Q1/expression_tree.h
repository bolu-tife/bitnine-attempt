#ifndef EXPRESSION_TREE_H
#define EXPRESSION_TREE_H

#include "constant.h"

typedef enum TypeTag
{
    ADD,
    SUB,
    MUL,
    DIV,
    FIBO,
} TypeTag;

typedef struct Node
{
    TypeTag type;
    int value;
} Node;

Node *createNode(TypeTag type, int value);
Node *(*makeFunc(TypeTag type))();
void calc(Node *node);

#endif // EXPRESSION_TREE_H
