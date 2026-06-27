# C++ Beginning Project

This workspace contains beginner-level C++ console programs for learning input/output, variables, and simple arithmetic logic.

## Project Context

The project appears to be a practice workspace for foundational C++ programming tasks.  
Each source file focuses on basic concepts:

- Taking input from users
- Printing formatted output
- Performing arithmetic operations
- Handling simple conditions (for example, division by zero)

## Files Summary

### [basic.cpp](basic.cpp)

Collects student information from the user and prints it in a formatted layout.

Inputs:

- Name
- University name
- Semester
- CGPA

Output:

- A "Student Information" summary block printed to the console.

### [calculation.cpp](calculation.cpp)

Takes two integers and performs common arithmetic operations.

Operations:

- Sum
- Subtraction
- Multiplication
- Division (with safe check for division by zero)

### [tempCodeRunnerFile.cpp](tempCodeRunnerFile.cpp)

Usually generated temporarily by VS Code Code Runner during quick test runs.

### [basic.exe](basic.exe), [calculation.exe](calculation.exe)

Compiled executable outputs generated after building the C++ source files.

## How To Build And Run (Windows)

Use g++ in the project directory:

```bash
g++ "basic.cpp" -o "basic"
./basic

g++ "calculation.cpp" -o "calculation"
./calculation
```

If your shell does not support `./program`, run:

```bash
basic.exe
calculation.exe
```

## Learning Goals Covered

- Standard input and output with `cin`, `cout`, and `getline`
- Primitive data types (`int`, `float`, `string`)
- Arithmetic expressions
- Conditional statements (`if` / `else`)
- Basic console formatting with `endl`

## Suggested Next Improvements

1. Add input validation (for invalid numeric entries).
2. Improve output formatting consistency (for example, capitalization and spacing).
3. Split repeated logic into helper functions for better structure.
4. Add comments and examples for expected input/output in each file.
