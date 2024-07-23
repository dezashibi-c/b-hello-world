// ***************************************************************************************
//    Project: Enums, Constants, Intro to Macros
//    File: 03-enums_constants_intro_to_macros.c
//    Date: 2024-07-23
//    Author: Navid Dezashibi
//    Contact: navid@dezashibi.com
//    Website: https://www.dezashibi.com | https://github.com/dezashibi
//    License:
//     Please refer to the LICENSE file in the repository or website for more information
//     about the licensing of this work. If you have any questions or concerns,
//     please feel free to contact me at the email address provided above.
// ***************************************************************************************
// *  Description: Introduction to Enums, Constants and "define" macros as constants.
// *               Here you'll learn how and why you would want to use `enum`,
// *               and understand the difference between constants and macro definitions.
// ***************************************************************************************

#include <stdio.h>

// Enum definition:
// An enum (short for enumeration) is a user-defined type consisting of a set of named constants called enumerators.
enum week_days
{
    SUNDAY,    // 0
    MONDAY,    // 1
    TUESDAY,   // 2
    WEDNESDAY, // 3
    THURSDAY,  // 4
    FRIDAY,    // 5
    SATURDAY   // 6
};

// Constant definition using `const` keyword:
// Constants are variables whose values cannot be changed once defined.
const int days_in_week = 7;
const double pi = 3.14159;

/**
 * Macro definition using `#define`:
 * Macros are preprocessor directives that define constants or expressions that can be reused throughout the code.
 * They are replaced by their values before the actual compilation process starts.
 *
 * Difference between `#define` macros and `const`:
 * - `#define` macros are handled by the preprocessor, which means they do not have a type and are replaced
 *   by their value before the code is compiled. This can sometimes lead to unexpected behavior if not used carefully.
 * - `const` variables are actual typed variables, and the compiler performs type checking on them. They occupy
 *   memory space and can be used in debugging, providing better type safety and integration with the compiler.
 */
#define MAX_BUFFER_SIZE 1024
#define E 2.71828

int main(void)
{
    // Using enum:
    enum week_days today;
    today = WEDNESDAY;

    // Using constants and macros:
    int buffer[MAX_BUFFER_SIZE];
    double circle_area;
    double radius = 5.0;

    // Calculating area of a circle using `pi` constant
    circle_area = pi * radius * radius;

    // Printing values:
    printf("Today is day number: %d of the week\n", today);                         // Enum value
    printf("There are %d days in a week\n", days_in_week);                          // Constant value
    printf("The area of a circle with radius %.2f is %.2f\n", radius, circle_area); // Using constant value
    printf("The value of Euler's number E is %.5f\n", E);                           // Macro value

    return 0;
}
