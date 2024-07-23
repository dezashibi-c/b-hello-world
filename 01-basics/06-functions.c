// ***************************************************************************************
//    Project: Functions in C
//    File: 06-functions.c
//    Date: 2024-07-23
//    Author: Navid Dezashibi
//    Contact: navid@dezashibi.com
//    Website: https://www.dezashibi.com | https://github.com/dezashibi
//    License:
//     Please refer to the LICENSE file, repository or website for more information about
//     the licensing of this work. If you have any questions or concerns,
//     please feel free to contact me at the email address provided above.
// ***************************************************************************************
// *  Description: Introduction to functions and function calls in C.
// *               Learn how to define functions, declare them, and call them.
// *
// *               Function Declaration (Prototype):
// *               Before the `main` function, we declare the functions `add`, `print_hello`,
// *               and `factorial`. This informs the compiler about the function names, return
// *               types, and parameter types.
// *
// *               Function Call:
// *               Inside the `main` function, we call the declared functions. When a function
// *               is called, the control of the program is transferred to the called function.
// *
// *               Function Definition:
// *               Below the `main` function, we define the functions:
// *                 - `add`: Takes two integers as arguments and returns their sum.
// *                 - `print_hello`: Takes no arguments and returns no value. It simply prints a message.
// *                 - `factorial`: Takes an integer as an argument and returns its factorial using recursion.
// *
// *               Recursion:
// *               The `factorial` function demonstrates recursion, where a function calls itself.
// ***************************************************************************************

#include <stdio.h>

// Forward declaration (prototype) of functions
// This informs the compiler about the function names, return types, and parameter types
int add(int a, int b);
void print_hello(void);
int factorial(int n);

int main(void)
{
    // Function call to print_hello
    print_hello();

    // Function call to add with arguments 5 and 3
    int result = add(5, 3);
    printf("The sum of 5 and 3 is: %d\n", result);

    // Function call to factorial with argument 5
    int fact = factorial(5);
    printf("The factorial of 5 is: %d\n", fact);

    // Returning 0 to indicate that the program ran successfully
    return 0;
}

// Function definition for add
// This function takes two integers as arguments and returns their sum
int add(int a, int b)
{
    return a + b;
}

// Function definition for print_hello
// This function takes no arguments and returns no value
void print_hello(void)
{
    printf("Hello, World from a function!\n");
}

// Function definition for factorial
// This function takes an integer as an argument and returns its factorial
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
