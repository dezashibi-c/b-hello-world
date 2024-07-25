// ***************************************************************************************
//    Project: Working with Strings in C
//    File: 04-strings_and_string_h.c
//    Date: 2024-07-24
//    Author: Navid Dezashibi
//    Contact: navid@dezashibi.com
//    Website: https://www.dezashibi.com | https://github.com/dezashibi
//    License:
//     Please refer to the LICENSE file in the repository or website for more information
//     about the licensing of this work. If you have any questions or concerns,
//     please feel free to contact me at the email address provided above.
// ***************************************************************************************
// *  Description: Introduction to strings and the string.h library in C.
// *               Learn how to define and manipulate strings using string.h functions.
// *
// *               Strings:
// *               Strings in C are arrays of characters terminated by a null character '\0'.
// *               They are used to represent text.
// *
// *               string.h functions:
// *               The string.h library provides various functions to manipulate strings.
// *               Some of the commonly used functions are:
// *                 - strlen: Get the length of a string.
// *                 - strcpy: Copy a string.
// *                 - strcat: Concatenate two strings.
// *                 - strcmp: Compare two strings.
// *                 - strchr: Find the first occurrence of a character in a string.
// *                 - strstr: Find the first occurrence of a substring in a string.
// ***************************************************************************************

#include <stdio.h>
#include <string.h>

// Function declarations
void print_string(const char* str);
void concatenate_strings(char* dest, const char* src);

int main(void)
{
    // Define strings
    char str1[50] = "Hello";
    char str2[] = "World";
    char str3[100];

    // Print strings
    printf("String 1: ");
    print_string(str1);
    printf("String 2: ");
    print_string(str2);

    // Get the length of a string
    size_t len1 = strlen(str1);
    size_t len2 = strlen(str2);
    printf("Length of String 1: %zu\n", len1);
    printf("Length of String 2: %zu\n", len2);

    // Copy a string
    strcpy(str3, str1);
    printf("String 3 after strcpy: ");
    print_string(str3);

    // Concatenate strings
    strcat(str3, " ");
    strcat(str3, str2);
    printf("String 3 after strcat: ");
    print_string(str3);

    // Compare strings
    int cmp_result = strcmp(str1, str2);
    if (cmp_result == 0)
    {
        printf("String 1 and String 2 are equal\n");
    }
    else if (cmp_result < 0)
    {
        printf("String 1 is less than String 2\n");
    }
    else
    {
        printf("String 1 is greater than String 2\n");
    }

    // Find the first occurrence of a character in a string
    char* char_pos = strchr(str3, 'W');
    if (char_pos != NULL)
    {
        printf("First occurrence of 'W' in String 3: %s\n", char_pos);
    }
    else
    {
        printf("'W' not found in String 3\n");
    }

    // Find the first occurrence of a substring in a string
    char* substr_pos = strstr(str3, "World");
    if (substr_pos != NULL)
    {
        printf("First occurrence of \"World\" in String 3: %s\n", substr_pos);
    }
    else
    {
        printf("\"World\" not found in String 3\n");
    }

    // Returning 0 to indicate that the program ran successfully
    return 0;
}

// Function definition for print_string
// This function prints a string followed by a newline
void print_string(const char* str)
{
    printf("%s\n", str);
}

// Function definition for concatenate_strings
// This function concatenates two strings
void concatenate_strings(char* dest, const char* src)
{
    strcat(dest, src);
}
