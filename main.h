#ifndef MAIN_H
#define MAIN_H

#define BUFSIZE 1024

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* struct convert - defines a structure for symbols and functions
*
* @sym: The operator
* @f: The function associated
*/
struct convert
{
	char *sym;
	int (*f)(va_list, char *, int);
};
typedef struct convert conver_t;

/*The main functions*/
int parser(const char *format, conver_t f_list[], va_list arg_list, char *buf);
int _printf(const char *format, ...);
int _write_char(char);
int print_char(va_list, char *, int);
int print_string(va_list, char *, int);
int print_percent(va_list, char *, int);
int print_integer(va_list, char *, int);
int print_number(va_list, char *, int);
int print_binary(va_list, char *, int);
int print_reversed(va_list arg, char *, int);
int rot13(va_list, char *, int);
int unsigned_integer(va_list, char *, int);
int print_octal(va_list list, char *, int);
int print_hex(va_list list, char *, int);
int print_heX(va_list list, char *, int);
int print_pointer(va_list list, char *, int);
int printf_exclusive_string(va_list list);

/*Printf Helper functions*/
unsigned int base_len(unsigned int, int);
char *rev_string(char *);
void write_base(char *str, char *buf, int len);
char *_memcpy(char *dest, char *src, unsigned int n);
int print_unsgined_number(unsigned int, char *buf, int len);

#endif

