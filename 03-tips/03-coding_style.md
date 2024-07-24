# My Preferred Coding Style and Guidelines

This document outlines my personal coding style preferences, which are influenced by widely accepted conventions in the C programming community.

## Comments

I generally avoid excessive comment blocks at the top of files unless necessary. However, it is good practice to include a comment block with useful information at the beginning of each file. Here is a template I often use:

```c
// ***************************************************************************************
//    Project: 
//    File: 
//    Date: 
//    Author: 
//    Contact: 
//    Website: 
//    License:
//     Please refer to the LICENSE file, repository, or website for more information about
//     the licensing of this work. If you have any questions or concerns,
//     please feel free to contact me at the email address provided above.
// ***************************************************************************************
// *  Description: 
// ***************************************************************************************
```

## Naming Conventions

- **Variables:** Use snake_case, e.g., `my_variable`.
- **Function Names:** Use snake_case, e.g., `my_function`.
- **Custom Types:** Use PascalCase, e.g., `MyType`, `MyStruct`, `MyEnum`.
- **Constants and Enum Values:** Use ALL_CAPS, e.g., `PI`, `THING`, `SATURDAY`.
- **Function Macros:** Can be written in lowercase like normal functions.
- **Scope and Purpose in Naming:** Begin with the scope and purpose in function names:
  - e.g., `file_get_extension()`
  - This applies to both functions and function macros.
- **Avoid Function Pointers in Structs:** Do not use function pointers in structs to mimic C++ object-oriented programming. Instead, use proper functions:
  - e.g., `my_type_create`
  - e.g., `my_type_get_whatever_data`
  - e.g., `my_type_delete`
  - Also, don't hesitate to use some macros to simplify code where appropriate.
