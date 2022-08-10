#include "main.h"

/**
* print_reversed - Calls a function to reverse & print a string
* @arg: Argument passed to the function
* @buf: buffer
* @len_t: where to write in buffer
* Return: The amount of characters printed
*/
int print_reversed(va_list arg, char *buf, int len_t)
{
	int len;
	char *str;
	char *ptr;

	str = va_arg(arg, char *);
	if (str == NULL)
		return (-1);
	ptr = rev_string(str);
	if (ptr == NULL)
		return (-1);
	for (len = 0; ptr[len] != '\0'; len++)
	{
		_write_char(buf, ptr[len], len_t);
		len_t ++;
	}
	free(ptr);
	return (len);
}

/**
* rot13 - Converts string to rot13
* @list: string to convert
* @buf: buffer
* @len_t: where to write in buffer
* Return: converted string
*/
int rot13(va_list list, char *buf, int len_t)
{
	int i;
	int x;
	char *str;
	char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char u[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(list, char *);
	if (str == NULL)
		return (-1);
	for (i = 0; str[i] != '\0'; i++)
	{
		for (x = 0; x <= 52; x++)
		{
			if (str[i] == s[x])
			{
				_write_char(buf, u[x], len_t);
				len_t ++;
				break;
			}
		}
		if (x == 53)
		{
			_write_char(buf, str[i], len_t);
			len_t ++;
		}
	}
	return (i);
}

