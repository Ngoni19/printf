#include "main.h"
/**
*print_char - Function prints characters
*@list: list of arguments
*@buf: buffer
*@len: where to write in buffer
* Return: Return total number of characters printed.
*/
int print_char(va_list list, char *buf, int len)
{
	_write_char(buf, va_arg(list, int), len);
	return (1);
}

/**
* print_string - Function prints a string
*@list: list of arguments
*@buf: buffer
*@len: where to write in buffer
* Return: Will return the amount of characters printed.
*/
int print_string(va_list list, char *buf, int len)
{
	int i;
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
	{
		_write_char(buf, str[i], len);
		len ++;
	}
	return (i);
}

/**
* print_percent - Function prints a percent(%) symbol
*@list: list of arguments
*@buf: buffer
*@len: where to write in buffer
* Return: Return the amount of characters printed.
*/
int print_percent(__attribute__((unused))va_list list, char *buf, int len)
{
	_write_char(buf, '%', len);
	return (1);
}

/**
* print_integer - Function prints an integer
*@list: list of arguments
*@buf: buffer
*@len: where to write in buffer
* Return: Return the amount of characters printed.
*/
int print_integer(va_list list, char *buf, int len)
{
	int num_length;

	num_length = print_number(list, buf, len);
	return (num_length);
}

/**
* unsigned_integer - Function prints Unsigned integers
*@list: list of arguments
*@buf: buffer
*@len: where to write in buffer
* Return: a count of the numbers
*/
int unsigned_integer(va_list list, char *buf, int len)
{
	unsigned int num;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (print_unsgined_number(num, buf, len));

	if (num < 1)
		return (-1);
	return (print_unsgined_number(num, buf, len));
}
/**
* print_pointer - Function prints pointer integers
*@list: list of arguments
*@buf: buffer
*@len: where to write in buffer
* Return: a count of the numbers
*/

int print_pointer(va_list list, char *buf, int len_t)
{
	
	int len;
	void *ptr;
	
	ptr = va_arg(list, void *);
	len = 1;
	
	_write_char(buf, 'p', len_t);
	return (len);
	
	/*
	*this is a place holder function 
	*will be updated for true fanctionality
	*/	
}
