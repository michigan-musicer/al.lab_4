#include "lab04.h"

// Example of a non-recursive function with int return type.

int multiplier(int a, int b) {
    return a * b;
}

// Example of a non-recursive function with void return type.

void printer(char* str) {
    printf("%s\n", str);
}

// Recursive function that counts down from x to 0. 

void count_down(int x) {
    if (x == 0) {
        return;
    }
    printf("%d\n", x);
    count_down(x - 1);
}

// Recursive function that returns the nth Fibonacci number.
// See https://en.wikipedia.org/wiki/Fibonacci_sequence.

unsigned int nth_fibonacci(unsigned int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return nth_fibonacci(n - 1) + nth_fibonacci(n - 2);
}

// If you would like to see how any of these work, feel free 
// to run this file in CodeBlocks.
int main() {
    printf("Running multiplier with arguments 2, 3\n");
    printf("multiplier returned %d\n", multiplier(2, 3));
    printf("\nRunning printer with argument \"hello, this is printer!\"\n");
    printer("hello, this is printer!");
    printf("\nRunning count_down with argument 5\n");
    count_down(5);
    printf("\nRunning nth_fibonacci with arguments 0, 5, 15\n");
    printf("The 0th fibonacci number is %d\n", nth_fibonacci(0));
    printf("The 5th fibonacci number is %d\n", nth_fibonacci(5));
    printf("The 15th fibonacci number is %d\n", nth_fibonacci(15));
}