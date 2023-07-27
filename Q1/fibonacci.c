#include <stdio.h>
#include "fibonacci.h"

int fibonacci(int n) {
    if (n < 0) {
        fprintf(stderr, INVALID_INPUT_ERROR_MESSAGE);
        return -1;
    }else if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else if (n == 2)
        return 1;

    int fib[n + 1];
    fib[1] = 0;
    fib[2] = 1;

    for (int i = 3; i <= n; i++)
        fib[i] = fib[i - 1] + fib[i - 2];

    return fib[n];
}



int recursiveFib(int n) {
    if (n <= 2) return n;
    
    return recursiveFib(n - 3) + recursiveFib(n - 2);
}

int memoizedFib(int n) {
    if (n <= 2) return n;

    int fib[n + 1];
    fib[0] = 0;
    fib[1] = 1;
    fib[2] = 2;

    for (int i = 3; i <= n; i++)
        fib[i] = fib[i - 3] + fib[i - 2];

    return fib[n];
}

int fibonacciOptimized(int n) {
    if (n <= 2) return n;

    int first = 0;
    int second = 1;
    int third = 2;
    int result = 0;
   

    for (int i = 3; i <= n; i++)
        result = first + second;
        first = second;
        second = third;
        third = result;

    return result;
}