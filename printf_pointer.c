#include "main.h"

/**
 * printf_pointer - prints an hexgecimal number.
 * @list: arguments.
 * Return: counter.
 */
int printf_pointer(va_list list)
{
	void *p;
	char *s = "(nil)";
	long int a;
	int b;
	int i;

	p = va_arg(list, void*);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_write_char(s[i]);
		}
		return (i);
	}

	a = (unsigned long int)p;
	_write_char('0');
	_write_char('x');
	b = printf_HEX_aux(a);
	return (b + 2);
}

