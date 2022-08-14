#include "main.h"

/**
 * printf_exclusive_string - print exclusuives string.
 * @list: argument.
 * Return: the length of the string.
 */

int printf_exclusive_string(va_list list)
{
	char *s;
	int i, len = 0;
	int cast;

	s = va_arg(list, char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_write_char('\\');
			_write_char('x');
			len = len + 2;
			cast = s[i];
			if (cast < 16)
			{
				_write_char('0');
				len++;
			}
			len = len + printf_HEX_aux(cast);
		}
		else
		{
			_write_char(s[i]);
			len++;
		}
	}
	return (len);
}
