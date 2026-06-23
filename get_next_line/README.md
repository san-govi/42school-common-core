*This project has been created as part of the 42 curriculum by <sgovinda@student.42.fr>.*

## Description
The goal of this project is to implement a function that returns a line read from a file descriptor. 
The project teaches memory management, the use of static variables, and the handling of file descriptors 
in C, reinforcing understanding of how buffered reading works.

## Instructions

### Compilation
To compile the project, use the following command in your terminal:
gcc -Wall -Wextra -Werror -D BUFFER_SIZE=[size] get_next_line.c get_next_line_utils.c -o gnl

### Execution
Create a test file called `main.c` in the root directory that calls the get_next_line function, include the header file
`get_next_line.h` in `main.c`. 

Example compilation command:
`gcc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c main.c -I. -o test_gnl`

Then execute the program: 
`./test_gnl`.

## Algorithm and Data Structure
**Algorithm:** The chosen algorithm uses a static variable to retain the "remainder" of the data read from the file
descriptor between successive function calls.

Reading: We read from the file descriptor into a temporary buffer of size BUFFER_SIZE.

Joining: We append this buffer to our static variable until a newline character (\n) is found or EOF is reached.

Cleaning: We extract the line before the \n to return it, and update the static variable to hold only the remaining bytes for the next call.
This approach is efficient as it minimizes system calls (read) by utilizing the buffer effectively.

## Resources
* [Resource 1: Manual page for read] (https://man7.org/linux/man-pages/man2/read.2.html)
* [Resource 2: Static variables] (https://www.geeksforgeeks.org/c/static-variables-in-c/)

**AI Usage:**
AI was used purely as an educational resource for this project. Specifically, I used it to:

* Code review my functions and tests specifically helpful in debugging memory management logic.
* Also learned more about Git workflows like brancing and remotes to esnure I could submit project to vogsphere.
* No AI was used to generate the core code or algorithms for the ft_printfget_next_line implementation.