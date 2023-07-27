

#include <stdio.h>
#include <stdlib.h>

#include "expression_tree.h"
#include "arithmetic_operations.h"

Node *(*makeFunc(TypeTag type))()
{
    switch (type)
    {
    case ADD:
        return add;
    case SUB:
        return subtract;
    case MUL:
        return multiply;
    case DIV:
        return divide;
    case FIBO:
        return fibo;
    default:
        return NULL;
    }
}

Node *createNode(TypeTag type, int value)
{
    Node *node = (Node *)malloc(sizeof(Node));
    node->type = type;
    node->value = value;
    return node;
}

void calc(Node *node) {
    switch (node->type) {
        case ADD:
            printf("ADD: %d\n", node->value);
            break;
        case SUB:
            printf("SUB: %d\n", node->value);
            break;
        case MUL:
            printf("MUL: %d\n", node->value);
            break;
        case DIV:
            printf("DIV: %d\n", node->value);
            break;
        case FIBO:
            printf("FIBO: %d\n", node->value);
            break;
        default:
            //  fprintf(stderr, INVALID_OPERATION_ERROR_MESSAGE);
            break;
    }
}