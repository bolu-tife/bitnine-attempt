#include <stdio.h>
#include "fibonacci.h"

int fibonacci(int n) {
    if (n < 0) {
        // fprintf(stderr, INVALID_INPUT_ERROR_MESSAGE);
        return -1;
    }else if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else if (n == 2)
        return 1;

    int fib[n ];
    fib[0] = 0;
    fib[1] = 1;
    fib[2] = 1;

    for (int i = 3; i <= n; i++)
        fib[i] = fib[i - 1] + fib[i - 2];

    return fib[n-1];
}

