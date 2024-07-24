// ***************************************************************************************
//    Project: Pointers, Function Macros, and Function Pointers in C
//    File: 02-pointers_function-macros_function-pointers.c
//    Date: 2024-07-24
//    Author: Navid Dezashibi
//    Contact: navid@dezashibi.com
//    Website: https://www.dezashibi.com | https://github.com/dezashibi
//    License:
//     Please refer to the LICENSE file in the repository or website for more information
//     about the licensing of this work. If you have any questions or concerns,
//     please feel free to contact me at the email address provided above.
// ***************************************************************************************
// *  Description: Introduction to pointers, function macros, and function pointers in C.
// *               Learn how to define and use these concepts.
// *
// *               Pointers:
// *               Pointers are variables that store the memory address of another variable.
// *               They are powerful tools for managing memory and creating dynamic data structures.
// *
// *               Function Macros:
// *               Function macros are preprocessor directives that define reusable code blocks.
// *               They are not type-checked and are expanded inline by the preprocessor.
// *
// *               Function Pointers:
// *               Function pointers are pointers that point to the address of a function.
// *               They allow functions to be passed as arguments and stored in data structures.
// ***************************************************************************************

#include <stdio.h>

// Function macro definition
// A macro to calculate the square of a number
#define SQUARE(x) ((x) * (x))

// Function declaration
void swap(int *a, int *b);
int add(int a, int b);
int subtract(int a, int b);

// Function pointer type definition using typedef
typedef int (*operation_func)(int, int);

int main(void)
{
    // Pointers
    int x = 10;
    int y = 20;
    int *p_x = &x; // Pointer to x
    int *p_y = &y; // Pointer to y

    printf("x: %d, y: %d\n", x, y);
    printf("p_x: %p, p_y: %p\n", (void *)p_x, (void *)p_y);

    // Swapping values using pointers
    swap(p_x, p_y);
    printf("After swap - x: %d, y: %d\n", x, y);

    // Function macros
    int number = 5;
    printf("Square of %d: %d\n", number, SQUARE(number));

    // Function pointers
    operation_func op;
    op = add;
    printf("Addition: %d + %d = %d\n", x, y, op(x, y));

    op = subtract;
    printf("Subtraction: %d - %d = %d\n", x, y, op(x, y));

    // Returning 0 to indicate that the program ran successfully
    return 0;
}

// Function definition for swap
// This function swaps the values of two integers using pointers
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function definition for add
// This function adds two integers and returns the result
int add(int a, int b)
{
    return a + b;
}

// Function definition for subtract
// This function subtracts the second integer from the first and returns the result
int subtract(int a, int b)
{
    return a - b;
}
