// ***************************************************************************************
//    Project: Other Types and Typedef in C
//    File: 01-other_types_and_typedef.c
//    Date: 2024-07-23
//    Author: Navid Dezashibi
//    Contact: navid@dezashibi.com
//    Website: https://www.dezashibi.com | https://github.com/dezashibi
//    License:
//     Please refer to the LICENSE file in the repository or website for more information
//     about the licensing of this work. If you have any questions or concerns,
//     please feel free to contact me at the email address provided above.
// ***************************************************************************************
// *  Description: Introduction to structs, unions, typedef, and arrays in C.
// *               Learn how to define and use these types.
// *
// *               Structs:
// *               Structs (short for structures) are used to group different types of variables
// *               under a single name. Each variable in a struct is called a member.
// *
// *               Unions:
// *               Unions are similar to structs, but they only store one of their members at a time.
// *               The size of a union is determined by its largest member.
// *
// *               Typedef:
// *               Typedef is used to create new names (aliases) for existing types. It can make code
// *               easier to read and maintain.
// *
// *               Arrays:
// *               Arrays are collections of elements of the same type. They are used to store multiple
// *               values in a single variable.
// ***************************************************************************************

#include <stdio.h>

// Struct definition
struct person
{
    char name[50];
    int age;
    float height;
};

// Union definition
union data
{
    int i;
    float f;
    char str[20];
};

// Typedef example
typedef struct person person_t;
typedef union data data_t;

int main(void)
{
    // Using a struct
    struct person navid;
    person_t james;

    // Assigning values to struct members
    // snprintf is used to fill a char arrays, more on that later.
    snprintf(navid.name, sizeof(navid.name), "Navid Dezashibi");
    navid.age = 36;
    navid.height = 5.9;

    snprintf(james.name, sizeof(james.name), "James Smith");
    james.age = 28;
    james.height = 5.5;

    // Printing struct members
    printf("Name: %s, Age: %d, Height: %.1f\n", navid.name, navid.age, navid.height);
    printf("Name: %s, Age: %d, Height: %.1f\n", james.name, james.age, james.height);

    // Using a union
    union data my_data;
    data_t another_data;

    // Assigning and printing union members
    my_data.i = 10;
    printf("my_data.i: %d\n", my_data.i);

    my_data.f = 220.5;
    printf("my_data.f: %.1f\n", my_data.f);

    snprintf(my_data.str, sizeof(my_data.str), "Hello");
    printf("my_data.str: %s\n", my_data.str);

    another_data.i = 15;
    printf("another_data.i: %d\n", another_data.i);

    // Arrays
    int numbers[5] = {1, 2, 3, 4, 5};
    char message[] = "Hello, World!";

    // Accessing array elements
    for (int i = 0; i < 5; i++)
    {
        printf("numbers[%d]: %d\n", i, numbers[i]);
    }

    printf("Message: %s\n", message);

    return 0;
}
