#include <stdio.h>
#include "fibonacci.h"

void testFibonacci() {
    int result;
    int expected[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34};
    for (int i = 0; i < 10; i++) {
        if (fibonacci(i, &result) == NO_ERROR) {
            if (result == expected[i]) {
                printf("Test %d: PASSED\n", i);
            } else {
                printf("Test %d: FAILED (Expected: %d, Actual: %d)\n", i, expected[i], result);
            }
        } else {
            printf("Test %d: FAILED (Invalid Input)\n", i);
        }
    }
}

int main() {
    testFibonacci();
    return 0;
}
// 0,1,2,3,5,8,13