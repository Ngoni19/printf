# Printf
## Synopsis
This is a simple implementation of a custom printf function that formats and prints data

## Description
The _printf() function produces output according to a format specified
The function write its output to the stdout, the standard output stream.
Returns the count of printed characters when the function is successful and -1 when the function fails
Convertion specifiers for the project: i 
+ %c: Prints a single character.
+ %s: Prints a string of characters.
+ %d: Prints integers.
+ %i: Prints integers.
+ %b: Prints the binary representation of an unsigned decimal.
+ %u: Prints unsigned integers
+ %x: Prints the hexadecial representation of an unsigned decimal in lowercase letters
+ %X:Prints the hexadecial representation of an unsigned decimal in uppercase letters
+ %r: Prints a reversed string
+ %R: Prints the Rot13 interpretation of a string

## Usage
+ All the files are to be compiled on Ubuntu 20.04 LTS
+ Compile your code with `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c`
+ Include the "main.h" header file on the functions using the _printf()
