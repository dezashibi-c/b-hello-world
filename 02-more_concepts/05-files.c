// ***************************************************************************************
//    Project: Working with Files in C
//    File: 05-files.c
//    Date: 2024-07-24
//    Author: Navid Dezashibi
//    Contact: navid@dezashibi.com
//    Website: https://www.dezashibi.com | https://github.com/dezashibi
//    License:
//     Please refer to the LICENSE file in the repository or website for more information
//     about the licensing of this work. If you have any questions or concerns,
//     please feel free to contact me at the email address provided above.
// ***************************************************************************************
// *  Description: Introduction to file handling in C.
// *               Learn how to open, read, write, and close files.
// *
// *               Files in C:
// *               Files are used to store data permanently. C provides functions to
// *               perform operations on files through the standard I/O library.
// *
// *               File Modes:
// *               - "r": Read mode (open an existing file for reading).
// *               - "w": Write mode (create a new file or truncate an existing file for writing).
// *               - "a": Append mode (open a file for writing at the end of the file).
// *               - "r+": Read and write mode (open an existing file for both reading and writing).
// *               - "w+": Write and read mode (create a new file or truncate an existing file for both reading and writing).
// *               - "a+": Append and read mode (open a file for both reading and appending).
// ***************************************************************************************

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declare file pointers
    FILE *file_pointer;
    char filename[] = "example.txt";
    char data_to_write[] = "Hello, File Handling in C!\n";
    char buffer[100];

    // Writing to a file
    // Open the file in write mode ("w")
    file_pointer = fopen(filename, "w");
    if (file_pointer == NULL)
    {
        perror("Error opening file for writing");
        return EXIT_FAILURE;
    }

    // Write data to the file
    fprintf(file_pointer, "%s", data_to_write);
    printf("Data written to the file: %s", data_to_write);

    // Close the file after writing
    fclose(file_pointer);

    // Reading from a file
    // Open the file in read mode ("r")
    file_pointer = fopen(filename, "r");
    if (file_pointer == NULL)
    {
        perror("Error opening file for reading");
        return EXIT_FAILURE;
    }

    // Read data from the file and print it
    printf("\nData read from the file:\n");
    while (fgets(buffer, sizeof(buffer), file_pointer) != NULL)
    {
        printf("%s", buffer);
    }

    // Close the file after reading
    fclose(file_pointer);

    // Appending to a file
    // Open the file in append mode ("a")
    file_pointer = fopen(filename, "a");
    if (file_pointer == NULL)
    {
        perror("Error opening file for appending");
        return EXIT_FAILURE;
    }

    // Write additional data to the file
    fprintf(file_pointer, "Appending more data to the file.\n");
    printf("Additional data appended to the file.\n");

    // Close the file after appending
    fclose(file_pointer);

    // Read the file again to display all content
    printf("\nData in the file after appending:\n");
    file_pointer = fopen(filename, "r");
    if (file_pointer == NULL)
    {
        perror("Error opening file for reading");
        return EXIT_FAILURE;
    }

    // Read and print the entire content
    while (fgets(buffer, sizeof(buffer), file_pointer) != NULL)
    {
        printf("%s", buffer);
    }

    // Close the file after reading
    fclose(file_pointer);

    // Returning 0 to indicate that the program ran successfully
    return 0;
}
