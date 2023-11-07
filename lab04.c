#include "lab04.h"

// Part 1: practice defining functions.
// This is intended to be basic warmup before getting to 
// problems on recursion.

// PROBLEM 1: Define a function that prints "5\n" to the
// terminal. Name this function "problem_1".



// PROBLEM 2: Define a function that takes an int parameter x
// and prints "x\n" to the terminal, where x is the value of
// the parameter x. Name this function "problem_2".



// PROBLEM 3: Define a function that returns the area of a triangle
// given the lengths of two sides and the angle between them. Use the
// following formula:
// 
// area = 0.5 * side * side * sin(angle)
// 
// Your function should take in three double type parameters.
// 
// NOTE: for sine, please use the sin() function from <math.h>. The 
// angle will be in radians.
// 
// Name this function "problem_3".



// Part 2: practice basic recursive problems with numbers.

// PROBLEM 4: Write the function body to recursively calculate the
// nth Lucas number. The Lucas numbers are similar to the Fibonacci
// numbers, but with different starting values.
// Lucas numbers: https://en.wikipedia.org/wiki/Lucas_number

int problem_4(int n) {
    assert(0);
}

// PROBLEM 5: Write the function body to recursively calculate the
// nth triangle number. The nth triangle number is defined as 
// n + the (n-1)th triangle number. (You can use a different recursive
// definition that is more mathematically sound, if you are a math nerd
// :D)
// Triangle numbers: https://en.wikipedia.org/wiki/Triangular_number 

int problem_5(int n) {
    assert(0);
}

// Part 3: recursion problems with C-strings.

// PROBLEM 6: Given a C-string str, use recursion to print str in reverse.
// (The non-recursive solution is easier, but you should try to find the 
// recursive solution.) Do not print a newline character.
// Example: given "abcdefg", should print "gfedcba".

void problem_6(char* str) {
    assert(0);
}

// Complete the following only if you have extra time.
// 
// CHALLENGE: use dynamic programming to efficiently calculate the 
// nth Fibonacci number.
// You can start by trying a basic recursive solution, but without dynamic programming
// the last number will either take very, very long to compute or cause CodeBlocks to 
// segfault due to stack overflow (https://en.wikipedia.org/wiki/Stack_overflow).
// 
// About the Fibonacci sequence: https://en.wikipedia.org/wiki/Fibonacci_sequence
// About dynamic programming: https://www.geeksforgeeks.org/what-is-memoization-a-complete-tutorial/
// 
// This is a very challenging topic for this level and you are not expected to solve this.
// If you do, let me or Anna know and I will give you candy :)

// You may assume memo is large enough to store at least n elements.
unsigned int challenge(unsigned int n, unsigned int* memo) {
    assert(0);
}

// main function here is just a testing harness.
int main() {
    // Problem 1
    printf("Testing problem_1. The next line should be \"5\\n\".\n");
    problem_1();
    // Problem 2
    printf("\nTesting problem_1. The next lines should be \"3\\n\" and \"22\\n\".\n");
    problem_2(3);
    problem_2(22);
    // Problem 3
    printf("\nTesting problem_3.\n");
    // We should be able to just pull in pi from a define macro, but 
    // my compiler doesn't like it and this works fine so oh well
    double pi = atan(1) * 4;
    assert(problem_3(2, 5, pi / 2.0) == 5);
    assert(problem_3(4, 4, pi / 4.0) == sin(pi / 4.0) * 8);

    // Problem 4
    printf("\nTesting problem_4.\n");
    assert(problem_4(3) == 4);
    assert(problem_4(8) == 47);
    // Problem 5
    printf("\nTesting problem_5.\n");
    assert(problem_5(5) == 15);
    assert(problem_5(15) == 120);
    // Problem 6
    printf("\nTesting problem_6. The next lines should be \"racecar\\n\" and \"gfedcba\\n\".\n");
    problem_6("racecar");
    problem_6("abcdefg");
    
    // CHALLENGE
    printf("\nTesting challenge problem, good luck!\n");
    unsigned int memo[65536];
    for (unsigned int i = 0; i < 65536; ++i) {
        memo[i] = 0;
    }
    assert(challenge(0, memo) == 0);
    assert(challenge(20, memo) == 6765);
    assert(challenge(46, memo) == 1836311903);
}
