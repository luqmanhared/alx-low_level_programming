0x14. C - Bit manipulation

Here is my compiled README file to make the undertsanding easier 

# Bit Manipulation Functions

A collection of C functions that perform various bit manipulation tasks.

## Functions

- `unsigned int binary_to_uint(const char *b)`: Converts a binary number to an unsigned int.
- `void print_binary(unsigned long int n)`: Prints the binary representation of a number.
- `int get_bit(unsigned long int n, unsigned int index)`: Returns the value of a bit at a given index.
- `int set_bit(unsigned long int *n, unsigned int index)`: Sets the value of a bit to 1 at a given index.
- `int clear_bit(unsigned long int *n, unsigned int index)`: Sets the value of a bit to 0 at a given index.
- `unsigned int flip_bits(unsigned long int n, unsigned long int m)`: Returns the number of bits you would need to flip to get from one number to another.

## Usage

1. Include the `main.h` header file in your C source file.
2. Compile your C source file along with the `_putchar.c` file (if your source file uses the `_putchar` function).
3. Link the object files generated in the previous step to create an executable.

## Example

Suppose you have a C source file `main.c` that uses the `print_binary` function. You can compile and link the files as follows:

```sh
gcc -c main.c _putchar.c
gcc main.o _putchar.o -o main
