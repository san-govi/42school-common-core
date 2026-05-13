*This project has been created as part of the 42 curriculum by <sgovinda@student.42.fr>.*

## Description
Recode the printf() function from libc.
Specifically handling the following conversions: c, s, p, d, i, u, x, X, and %.

## Instructions

### Compilation
Run `make all` in the root directory to compile the project. You can also use `make clean` to remove object files or `make fclean` to remove the entire library.

### Execution
Create a test file called `main.c` in the root directory and compile it together with the library. 

Example compilation command:
`cc main.c libftprintf.a -I. -o test_ft_printf` 

Then execute the program: 
`./test_ft_printf`.

## Algorithm and Data Structure
**Algorithm:** This project utilises a single-pass parsing algorithm. It iterates through the format string character by character, writing directly to standard output. Upon encountering a % specifier, it acts as a dispatcher, routing the subsequent variadic argument to dedicated handler functions. For numerical conversions (integers, unsigned integers, pointers, and hexadecimal), I implemented a recursive algorithm. This allows the numbers to be printed character-by-character directly to standard output.

**Data Structures:** Due to the recursive approach, no complex data structures (such as linked lists, structs, or allocated arrays) were required. The only "structure" utilised is the standard C va_list macro, which manages the extraction of variadic arguments sequentially. Once all the arguments a processed or the function terminates early I use va_end to clean up va_list to ensure that resources are properly released.

## Resources
* [Resource 1: Variadic functions in C] (https://www.geeksforgeeks.org/c/variadic-functions-in-c/)

**AI Usage:**
AI was used purely as an educational resource for this project. Specifically, I used it to:

* Learn the industry standards for organising C files (src/).
* Code review my functions and tests.
* No AI was used to generate the core code or algorithms for the ft_printf implementation.