// ***************************************************************************************
//    Project: Anatomy of a Small C Program
//    File: 01-hello_world.c
//    Date: 2024-07-22
//    Author: Navid Dezashibi
//    Contact: navid@dezashibi.com
//    Website: https://www.dezashibi.com | https://github.com/dezashibi
//    License:
//     Please refer to the LICENSE file in the repository or website for more information
//     about the licensing of this work. If you have any questions or concerns,
//     feel free to contact me at the email address provided above.
// ***************************************************************************************
// *  Description: A minimal C program consists of one `.c` file that must be compiled
// *               using a C compiler such as `gcc`, `clang`, `zig cc`, `tcc`, etc.
// *               To compile the program, type:
// *               `<path to your compiler> -o <filename.exe or .out> <file.c>`
// *               Example: `gcc -o 01-hello_world.out 01-hello_world.c`
// ***************************************************************************************

/**
 * What is `#include` and what are `.h` files?
 *
 * The C compilation process consists of pre-processing and then compilation.
 * The preprocessor in C acts like an automated copy/paster which replaces
 * text in the current source file using what we call `macros`.
 *
 * We also have the concept of "header" files. Header files are where we can put
 * things like macros, function declarations, and type declarations such as enums and structs.
 * Based on your previous experience, you might already have a guess about what
 * they are and what they do, but if you don't, no problem.
 *
 * Including a header file means telling the preprocessor "Hey, grab the content
 * of this file and put it exactly right here where the include command is."
 *
 * This means the contents of "stdio.h" will be replaced by the following line.
 *
 * More on header files later.
 */
#include <stdio.h>

/**
 * main
 * @param void -> None
 *
 * @return int
 *
 * The main entry point of a C program is the "main" function. It can return nothing (void) or an integer.
 * Returning 0 generally means the program ran and exited successfully, while other numbers such as 1 or -1
 * indicate there were problems during execution.
 */
int main(void)
{
    // The declaration of this function comes from the "stdio.h" header included above.
    // We use it to print a simple string of characters followed by a newline character on the user's screen.
    puts("Yay, Hello World!");

    // Return 0, indicating that everything is good and we're done.
    // Note that we could remove this line, but it's a good practice to always follow this convention.
    return 0;
}
