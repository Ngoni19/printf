#include "main.h"

/**
 * _printf - Function receives main string and all the necessary parameters to
 * print a formated string
 * @format: String contains all the desired characters
 * Return: Total count of the characters printed
 */
int _printf(const char *format, ...)
{
	int printed_chars;
	char *buf;
	
	/*
	*make an array of a convert structure
	*allows us to call functions through pointers whenever
	*there is a match to a char
	*/
	conver_t f_list[] = {
		{"c", print_char}, /* done */
		{"s", print_string}, /* done */
		{"%", print_percent}, /* done */
		{"d", print_integer}, /* done */
		{"i", print_integer}, /* done */
		{"b", print_binary}, /* done */
		{"u", unsigned_integer}, /* done */
		{"o", print_octal}, /* done */
		{"x", print_hex}, /* done */
		{"X", print_heX}, /* done */
		{"r", print_reversed}, /* done */
		{"R", rot13}, /* done */
		{"p", print_pointer},
		{"S", printf_exclusive_string},
		{NULL, NULL}
	};
	/* declare variable length variable*/
	va_list arg_list;	
	buf = malloc(BUFSIZE * sizeof(char));
	if (format == NULL || buf == NULL)
		return (-1);

	/* initialize the variable */
	va_start(arg_list, format);
	/*Call parser function*/
	printed_chars = parser(format, f_list, arg_list, buf);
	va_end(arg_list);	
	write(1, buf, printed_chars);	
	return (printed_chars);
}

