// ***************************************************************************************
//    Project: Read on screen and ask for data from user
//    File: 04-io_part1.c
//    Date: 2024-07-23
//    Author: Navid Dezashibi
//    Contact: navid@dezashibi.com
//    Website: https://www.dezashibi.com | https://github.com/dezashibi
//    License:
//     Please refer to the LICENSE file in the repository or website for more information
//     about the licensing of this work. If you have any questions or concerns,
//     please feel free to contact me at the email address provided above.
// ***************************************************************************************
// *  Description: In this example, you'll be introduced to `printf`, `puts`, `perror`,
// *               `scanf`, `stdin`, `stdout`, `FILE`, `fgets`, and `fprintf`.
// *               Also the differences between `printf` and `puts`, and when to use what.
// ***************************************************************************************

#include <stdio.h>

int main(void)
{
    // printf: Used for formatted output. Allows us to format the string with variables.
    // Syntax: printf(format_string, variables...);
    // Format specifiers: %d for integers, %c for characters, %f for floats, %s for strings, etc.
    printf("Hello, World using printf!\n");
    int age = 25;
    printf("I am %d years old.\n", age);

    // puts: Used for simple string output. Automatically adds a newline character at the end.
    // Syntax: puts(string);
    puts("Hello, World using puts!");
    // The line above is equivalent to the line below
    printf("%s\n", "Hello, World using printf!");
    // Tip: when printing literal strings, try to use `puts` than `printf`
    // it's slightly faster and more optimized.

    // perror: Used for error messages. It prints the string you pass to it followed by a description of the last error.
    // Syntax: perror(message);
    FILE* file_ptr = fopen("non_existent_file.txt", "r");
    if (file_ptr == NULL)
    {
        perror("Error opening file");
    }

    // scanf: Used for formatted input. Reads input from the standard input (stdin) and stores it in variables.
    // Syntax: scanf(format_string, &variables...);
    // Note: Always use the address-of operator (&) to pass the address of variables.
    int user_age;
    printf("Please enter your age: ");
    scanf("%d", &user_age);
    printf("You entered: %d\n", user_age);

    // stdin: Standard input stream. Typically connected to the keyboard input.
    // Syntax: stdin
    // Example: Using stdin with fgets to read a string
    char name[50];
    printf("Please enter your name: ");
    fgets(name, sizeof(name), stdin);
    printf("Hello, %s", name);

    // stdout: Standard output stream. Typically connected to the terminal or console.
    // Syntax: stdout
    // Example: Using stdout with fprintf
    fprintf(stdout, "This message is printed to the standard output.\n");

    // FILE: A type used to represent a file stream. It is used for reading from or writing to files.
    // fopen: Opens a file and returns a FILE pointer. The first argument is the filename, and the second is the mode ("r" for reading, "w" for writing, etc.).
    FILE* file = fopen("example.txt", "w");
    if (file == NULL)
    {
        perror("Error opening file for writing");
        return 1; // Exit if file cannot be opened
    }

    // fprintf: Similar to printf, but prints to a file instead of the console.
    // Syntax: fprintf(FILE *stream, format_string, variables...);
    fprintf(file, "This is written to the file example.txt.\n");
    fprintf(file, "User age: %d\n", user_age);

    // fclose: Closes a file. Always close files when done to free resources.
    fclose(file);

    // fgets: Reads a string from a file or stdin. The string is stored in the provided buffer.
    // Syntax: fgets(buffer, size, FILE *stream);
    FILE* input_file = fopen("example.txt", "r");
    if (input_file == NULL)
    {
        perror("Error opening file for reading");
        return 1; // Exit if file cannot be opened
    }

    char file_content[100];
    if (fgets(file_content, sizeof(file_content), input_file) != NULL)
    {
        printf("Content from file: %s", file_content);
    }

    // Close the file after reading
    fclose(input_file);

    // Returning 0 to indicate that the program ran successfully
    return 0;
}
