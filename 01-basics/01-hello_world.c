// ***************************************************************************************
//    Project: Anatomy of a small "c" program
//    File: 01-hello_world.c
//    Date: 2024-07-22
//    Author: Navid Dezashibi
//    Contact: navid@dezashibi.com
//    Website: https://www.dezashibi.com | https://github.com/dezashibi
//    License:
//     Please refer to the LICENSE file, repository or website for more information about
//     the licensing of this work. If you have any questions or concerns,
//     please feel free to contact me at the email address provided above.
// ***************************************************************************************
// *  Description: a minimal `c` program is consist of one `.c` file that must be compiled
// *               using the C compiler such as `gcc`, `clang`, `zig cc`, `tcc`, etc.
// *               to compiler the program type
// *               `<path to your compiler> -o <filename.exe or .out> <file.c>
// *               `gcc -o 01-hello_world.out 01-hello_world.c`
// ***************************************************************************************

/**
 * What is include and what are `.h` files?
 *
 * C compilation process consist of pre-processing->then compilation
 * Preprocessor of C acts like an automated copy/paster which replaces
 * texts in the current source file using what we call them `Macros`
 *
 * in the other hand we have the concept of "header" files. header files
 * are places which we can put things like Macros, Function definitions,
 * type declarations such as Enums and Structs.
 * based on your previous experiences you might already have guessed what
 * they are and what they do but if you don't no problem.
 *
 * to include a header file means to tell the preprocessor "hey grab the content
 * of this file and put it exactly right here where I am (the include command)"
 *
 * this means the contents of "stdio.h" will be replaced by the following line.
 *
 * more on header files later
 */
#include <stdio.h>

/**
 * main
 * @param void -> None
 *
 * @return int
 *
 * Main entry of a c program is "main" function, it can return nothing or an integer number.
 * 0 generally means program ran and exited successfully and other number such as 1 or -1 means
 * there have been problem when the program was running.
 */
int main(void)
{
    // the declaration of this function is coming from the "stdio.h" above
    // we use it to print out simple string of characters which will be followed
    // by the new line character on the user's screen.
    puts("Yay, Hello World!");

    // simply return 0 meaning it's all good and we're done
    // note that we could've remove this line
    // but it's a good practice to always follow this convention.
    return 0;
}