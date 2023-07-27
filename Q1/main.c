#include <stdio.h>
#include <stdlib.h>
#include "expression_tree.h"
#include "arithmetic_operations.h"
#include "fibonacci.h"


int main() {
    Node *add = (*makeFunc(ADD))(10, 6);
    Node *mul = (*makeFunc(MUL))(5, 4);

    Node *sub = (*makeFunc(SUB))(add->value, mul->value);
    Node *fiboSub = (*makeFunc(SUB))(sub->value, NULL);
    Node *fibo = (*makeFunc(FIBO))(sub->value,NULL);

    calc(add);
    calc(mul);
    calc(sub);
    calc(fibo);
    calc(fiboSub);

    return 0;
}