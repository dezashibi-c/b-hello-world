// ***************************************************************************************
//    Project: Simple Types and Variables in C
//    File: 02-simple_types_and_variables.c
//    Date: 2024-07-23
//    Author: Navid Dezashibi
//    Contact: navid@dezashibi.com
//    Website: https://www.dezashibi.com | https://github.com/dezashibi
//    License:
//     Please refer to the LICENSE file in the repository or website for more information
//     about the licensing of this work. If you have any questions or concerns,
//     please feel free to contact me at the email address provided above.
// ***************************************************************************************
// *  Description: In this example, you'll be introduced to types such as `int`, `char`,
// *               `double`, and `float` in C, and how we can store values in variables
// *               to use them later on.
// ***************************************************************************************

#include <stdio.h>

/**
 * Global scope:
 * Variables declared outside of any function have a global scope and can be accessed
 * from any function within the same file.
 */
int global_int = 10; // A global integer variable

int main(void)
{
    // Local scope: Variables declared inside a function have a local scope
    // and can only be accessed within that function.

    // Integer variable: Stores whole numbers
    int local_int = 5;

    // Character variable: Stores single characters
    char local_char = 'A';

    // Floating-point variable: Stores decimal numbers
    float local_float = 3.14f;

    // Double variable: Stores double-precision decimal numbers
    double local_double = 2.71828;

    /**
     * The `printf` function:
     * `printf` is a standard library function in C used to print formatted output
     * to the screen. The function takes a format string followed by a list of
     * variables to be printed. The format string can include format specifiers
     * like %d for integers, %c for characters, %f for floating-point numbers,
     * and %lf for double-precision numbers. More details on format specifiers
     * and usage will be provided later on.
     */

    // Printing the values of the variables
    printf("Global Integer: %d\n", global_int);
    printf("Local Integer: %d\n", local_int);
    printf("Local Character: %c\n", local_char);
    printf("Local Float: %.2f\n", local_float);
    printf("Local Double: %.5f\n", local_double);

    // Modifying the values of the variables
    global_int += 5;
    local_int -= 2;
    local_char = 'B';
    local_float *= 2.0f;
    local_double /= 2.0;

    // Printing the modified values of the variables
    printf("Modified Global Integer: %d\n", global_int);
    printf("Modified Local Integer: %d\n", local_int);
    printf("Modified Local Character: %c\n", local_char);
    printf("Modified Local Float: %.2f\n", local_float);
    printf("Modified Local Double: %.5f\n", local_double);

    // Returning 0 to indicate that the program ran successfully
    return 0;
}
