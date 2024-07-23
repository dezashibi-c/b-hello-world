// ***************************************************************************************
//    Project: Conditions and Loops in C
//    File: 05-condition_loop.c
//    Date: 2024-07-23
//    Author: Navid Dezashibi
//    Contact: navid@dezashibi.com
//    Website: https://www.dezashibi.com | https://github.com/dezashibi
//    License:
//     Please refer to the LICENSE file, repository or website for more information about
//     the licensing of this work. If you have any questions or concerns,
//     please feel free to contact me at the email address provided above.
// ***************************************************************************************
// *  Description: Flow control in C introducing `if`, `for`, `while`, `do-while`
// *               and `switch`.
// ***************************************************************************************

#include <stdio.h>

int main(void)
{
    // if statement: Used for conditional execution of code
    int number = 10;
    if (number > 0)
    {
        printf("The number is positive.\n");
    }
    else if (number < 0)
    {
        printf("The number is negative.\n");
    }
    else
    {
        printf("The number is zero.\n");
    }

    // for loop: Used for iterating over a range of values
    // Syntax: for(initialization; condition; increment/decrement) { code }
    printf("For loop example:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("i = %d\n", i);
    }

    // while loop: Used for repeating a block of code while a condition is true
    // Syntax: while(condition) { code }
    printf("While loop example:\n");
    int count = 0;
    while (count < 5)
    {
        printf("count = %d\n", count);
        count++;
    }

    // do-while loop: Similar to while loop but guarantees at least one execution of the loop
    // Syntax: do { code } while(condition);
    printf("Do-while loop example:\n");
    int index = 0;
    do
    {
        printf("index = %d\n", index);
        index++;
    } while (index < 5);

    // switch statement: Used for selecting one of many code blocks to be executed
    // Syntax: switch(variable) { case value1: code; break; case value2: code; break; ... default: code; }
    int day_of_week = 3; // Example: 3 represents Wednesday
    switch (day_of_week)
    {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    case 7:
        printf("Sunday\n");
        break;
    default:
        printf("Invalid day\n");
        break;
    }

    return 0;
}
