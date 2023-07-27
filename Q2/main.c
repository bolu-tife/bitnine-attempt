#include <stdio.h>
#include <stdlib.h>
#include "fibonacci.h"


int main() {
    int n = 10;
    
    printf("Recursive Fib: F(%d) = %d\n", n, recursiveFib(n));
    printf("Memoization/Dynamic Programming: F(%d) = %d\n", n, memoizedFib(n));
    printf("Opimized Fib: F(%d) = %d\n", n, optimizedFib(n));

    return 0;
}