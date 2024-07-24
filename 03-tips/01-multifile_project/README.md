# Splitting Projects into Multiple Files

## Project Overview

This project demonstrates how to split a C project into multiple files and compile them using the compiler CLI command. We will create a simple math library with addition and subtraction functions, and use them in the main program.

## File Structure

The project consists of the following files:

- `main.c`: The main file that uses the functions from the math library.
- `math_utils.h`: The header file that declares the functions of the math library.
- `math_utils.c`: The source file that implements the functions of the math library.

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

## Compilation Guide

1. **Creating the files**:
    - Create three files named `main.c`, `math_utils.h`, and `math_utils.c` in the same directory.

2. **Compiling the project**:
    - Open a terminal or command prompt and navigate to the directory containing the files.
    - Compile the files together using the `gcc` compiler (or any other C compiler) with the following command:

      ```sh
      gcc -o multifile_project.exe main.c math_utils.c
      ```

    - This command tells the compiler to compile `main.c` and `math_utils.c` together and produce an executable named `multifile_project`.
    - Feel free to use `clang` or `zig cc` instead of `gcc`.

3. **Running the compiled program**:
    - After compilation, run the executable with the following command:

      ```sh
      ./multifile_project.exe
      ```

    - This will execute the program, and you should see the following output:

      ```
      Sum: 8
      Difference: 2
      ```

## Explanation

- **Header File (`math_utils.h`)**:
  - Declares the functions `add` and `subtract`.
  - Includes include guards (`#ifndef MATH_UTILS_H` and `#endif`) to prevent multiple inclusions.

- **Implementation File (`math_utils.c`)**:
  - Includes the header file `math_utils.h`.
  - Implements the functions declared in the header file.

- **Main File (`main.c`)**:
  - Includes the header file `math_utils.h`.
  - Uses the functions `add` and `subtract` defined in `math_utils.c`.

- **Compilation**:
  - The `gcc` command compiles `main.c` and `math_utils.c` together to create the executable.
  - The executable is run to see the results of the program.

## Author

Navid Dezashibi

- Email: <navid@dezashibi.com>
- GitHub: [@dezashibi](https://github.com/dezashibi)
- Website: [https://www.dezashibi.com](https://www.dezashibi.com)

## License

Please refer to the LICENSE file in the repository or website for more information about the licensing of this work. If you have any questions or concerns, please feel free to contact me at the email address provided above.
