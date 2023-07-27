# Fibonacci

## Development Environment
The program is implemented in C and uses standard C libraries. To compile and run the program, you'll need:

- GCC (GNU Compiler Collection) or any other C compiler
- Standard C libraries

## How to Compile and Run the Source Code

1. Clone the repository or download the source code files:
git clone https://github.com/bolu-tife/bitnine-attempt.git

2. Change to Q2 in the project directory:

3. Compile the source files:
`make build`

The above command compiles all the C source files and links them into an executable named `c`.

4. Run the executable:
`make run`

The program will evaluate the arithmetic operations and Fibonacci sequence based on the given expressions and print the results.

## Approaches
1. Recursive
    
    Advantages
    - simple to implement
    
    
    Disadvantages
    - Exponential time complexity
    - Can cause stack overflow depending on the input

2. Memoization/Dp

    Advantages
    - linear time complexity - O(n)


    Disadvantages
    - Additional memory (Space complexity - O(n))
        
        
2. Opimized/Dp

    Advantages
    - Linear time complexity - O(n)
    - Constant space
    

## Sample Output
Recursive Fib: F(10) = 13
Memoization/Dynamic Programming: F(10) = 13
Opimized Fib: F(10) = 13
