# Splitting Projects into Multiple Files with Makefiles

## Project Overview

This project demonstrates how to split a C project into multiple files and compile them using a Makefile with incremental build support. We will create a simple math library with addition and subtraction functions, and use them in the main program.

## File Structure

The project consists of the following files:

- `main.c`: The main file that uses the functions from the math library.
- `math_utils.h`: The header file that declares the functions of the math library.
- `math_utils.c`: The source file that implements the functions of the math library.
- `Makefile`: The Makefile used to compile the project.

## File Descriptions

### main.c

```c
#include <stdio.h>
#include "math_utils.h"

int main(void)
{
    int a = 5, b = 3;

    // Using functions from math_utils.h
    int sum = add(a, b);
    int difference = subtract(a, b);

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);

    return 0;
}
```

### math_utils.h

```c
#ifndef MATH_UTILS_H
#define MATH_UTILS_H

// Function declarations
int add(int a, int b);
int subtract(int a, int b);

#endif // MATH_UTILS_H
```

### math_utils.c

```c
#include "math_utils.h"

// Function definitions

// Add two integers
int add(int a, int b)
{
    return a + b;
}

// Subtract the second integer from the first
int subtract(int a, int b)
{
    return a - b;
}
```

### Makefile

```makefile
# Compiler to use
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -pedantic

# Executable name
TARGET = multifile_project.out

# Source files
SRCS = main.c math_utils.c

# Object files
OBJS = $(SRCS:.c=.o)

# Default target
all: $(TARGET)

# Rule to link the object files and create the executable
$(TARGET): $(OBJS)
 $(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Rule to compile source files into object files
%.o: %.c
 $(CC) $(CFLAGS) -c $< -o $@

# Clean up the build files
clean:
 rm -f $(TARGET) $(OBJS)

# Phony targets
.PHONY: all clean
```

## Compilation Guide

### Using Makefiles

A Makefile is a special file that contains a set of directives used by the `make` build automation tool to compile and link a program. It allows for incremental builds, meaning only the changed files are recompiled, which can significantly speed up the build process for larger projects.

### How to Use the Makefile

1. **Creating the files**:
    - Create the files `main.c`, `math_utils.h`, `math_utils.c`, and `Makefile` in the same directory.

2. **Compiling the project**:
    - Open a terminal or command prompt and navigate to the directory containing the files.
    - Run the following command to compile the project:

      ```sh
      make
      ```

    - This command will use the rules defined in the Makefile to compile the project. The resulting executable will be named `multifile_project.out`.

3. **Running the compiled program**:
    - After compilation, run the executable with the following command:

      ```sh
      ./multifile_project.out
      ```

    - This will execute the program, and you should see the following output:

      ```
      Sum: 8
      Difference: 2
      ```

### Cleaning the Build Files

To clean up the build files (object files and the executable), run the following command:

```sh
make clean
```

This will remove the compiled executable and the object files, allowing you to start fresh.

## Explanation

- **Makefile Structure**:
  - **Variables**:
    - `CC`: The compiler to use (`gcc` in this case).
    - `CFLAGS`: Compiler flags for additional warnings and standards compliance.
    - `TARGET`: The name of the final executable.
    - `SRCS`: A list of source files.
    - `OBJS`: A list of object files corresponding to the source files.
  - **Rules**:
    - `all`: The default target that depends on the executable target.
    - `$(TARGET)`: The rule to link object files and create the executable.
    - `%.o: %.c`: A pattern rule to compile source files into object files.
    - `clean`: A rule to remove the compiled executable and object files.
