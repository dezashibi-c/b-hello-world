// ***************************************************************************************
//    Project: Dynamic Memory Allocation in C
//    File: 03-dynamic_memory_allocation.c
//    Date: 2024-07-24
//    Author: Navid Dezashibi
//    Contact: navid@dezashibi.com
//    Website: https://www.dezashibi.com | https://github.com/dezashibi
//    License:
//     Please refer to the LICENSE file in the repository or website for more information
//     about the licensing of this work. If you have any questions or concerns,
//     please feel free to contact me at the email address provided above.
// ***************************************************************************************
// *  Description: Introduction to dynamically allocated memory in C.
// *               Learn how to use malloc, calloc, and free functions.
// *
// *               Malloc:
// *               Malloc (memory allocation) allocates a specified number of bytes and returns
// *               a pointer to the first byte of the allocated memory. The memory is not initialized.
// *
// *               Calloc:
// *               Calloc (contiguous allocation) allocates memory for an array of elements, initializes
// *               all bytes to zero, and returns a pointer to the first byte of the allocated memory.
// *
// *               Free:
// *               Free deallocates the memory that was previously allocated by malloc or calloc,
// *               making it available for future allocations.
// ***************************************************************************************

#include <stdio.h>
#include <stdlib.h>

// Function to print an array
void print_array(int* array, int size);

int main(void)
{
    // Malloc example
    // Allocate memory for an array of 5 integers using malloc
    int* array_malloc = (int*)malloc(5 * sizeof(int));
    if (array_malloc == NULL)
    {
        perror("Failed to allocate memory using malloc");
        return 1;
    }

    // Initialize and print the array
    for (int i = 0; i < 5; i++)
    {
        array_malloc[i] = i + 1;
    }
    printf("Array allocated with malloc:\n");
    print_array(array_malloc, 5);

    // Calloc example
    // Allocate memory for an array of 5 integers using calloc
    int* array_calloc = (int*)calloc(5, sizeof(int));
    if (array_calloc == NULL)
    {
        perror("Failed to allocate memory using calloc");
        free(array_malloc);
        return 1;
    }

    // Print the array initialized by calloc (should be all zeros)
    printf("Array allocated with calloc (initialized to zero):\n");
    print_array(array_calloc, 5);

    // Free the allocated memory
    free(array_malloc);
    free(array_calloc);

    // Returning 0 to indicate that the program ran successfully
    return 0;
}

// Function definition for print_array
// This function prints the elements of an array
void print_array(int* array, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}
