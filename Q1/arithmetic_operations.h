#ifndef ARITHMETIC_OPERATIONS_H
#define ARITHMETIC_OPERATIONS_H

#include "constant.h"
#include "expression_tree.h"
#include "fibonacci.h"

Node *add(int a, int b);
Node *multiply(int a, int b);
Node *divide(int a, int b);
Node *subtract(int a, int b);
Node *fibo(int a);

#endif // ARITHMETIC_OPERATIONS_H
