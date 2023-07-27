#include <stdio.h>
#include "arithmetic_operations.h"

Node *add(int a, int b)
{
    return createNode(ADD, a + b);
}

Node *multiply(int a, int b)
{
    return createNode(MUL, a * b);
}

Node *divide(int a, int b)
{
    if (b == 0)
    {
        fprintf(stderr, DIV_BY_ZERO_ERROR_MESSAGE);
        return createNode(DIV, 0);
    }
    return createNode(DIV, a / b);
}

Node *subtract(int a, int b)
{
    if (b == NULL)
    {
        return createNode(FIBO, fibonacci(-a));
    }
    return createNode(SUB, a - b);
}

Node *fibo(int a)
{
    return createNode(FIBO, fibonacci(a));
}