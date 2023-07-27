#include <stdio.h>
#include "fibonacci.h"

void testFibonacci()
{
    int result;
    int expected[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34};
    for (int i = 0; i < 10; i++)
    {
        result = fibonacci(i);
        if (i <= 1 && result == i){
            printf("Test %d: PASSED\n", i);
        
        }
        else if (result == expected[i-1])
        {
            printf("Test %d: PASSED\n", i);
        }
        else
        {
            printf("Test %d: FAILED (Expected: %d, Actual: %d)\n", i, expected[i], result);
        }
    }
}
int main()
{
    testFibonacci();
    return 0;
}
