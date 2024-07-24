// ***************************************************************************************
//    Project: Splitting Projects into Multiple Files
//    File: main.c
//    Date: 2024-07-24
//    Author: Navid Dezashibi
//    Contact: navid@dezashibi.com
//    Website: https://www.dezashibi.com | https://github.com/dezashibi
//    License:
//     Please refer to the LICENSE file in the repository or website for more information
//     about the licensing of this work. If you have any questions or concerns,
//     please feel free to contact me at the email address provided above.
// ***************************************************************************************
// *  Description: This example demonstrates how to split a project into multiple files
// *               and compile them using the compiler CLI command.
// *               We will create a simple math library with addition and subtraction
// *               functions, and use them in the main program.
// ***************************************************************************************

#include "math_utils.h"
#include <stdio.h>

int main(void)
{
    int a = 5, b = 3;

    // Using functions from math_utils.h
    int sum = add(a, b);
    int difference = subtract(a, b);

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);

    return 0;
}
