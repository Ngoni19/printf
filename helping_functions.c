#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: string to reverse
 *
 *Description: copies s to another string in reverse
 * Return: A pointer to a character
 */
char *rev_string(char *s)
{
	int len;
	int start;
	char *dest;

	for (len = 0; s[len] != '\0'; len++)
	{}

	dest = malloc(sizeof(char) * len + 1);
	if (dest == NULL)
			return (NULL);

	*(dest + len) = '\0';
	start = 0;
	len --;
	while (len >= 0)
	{
		*(dest + start) = *(s + len);
		start ++;
		len --;
	}       
	return (dest);
}

/**
*write_base - function sends characters to be written on standard output
*@str: String to parse
*@buf: buffer
*@len: where to write in buffer
*/
void write_base(char *str, char *buf, int len)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_write_char(buf, str[i], len);
		len ++;
	}
}

/**
 * base_len - Calculates the length for an octal number
 * @num: The number for which the length is being calculated
 * @base: Base to be calculated by
 * Return: An integer representing the length of a number
 */
unsigned int base_len(unsigned int num, int base)
{
	unsigned int i;

	for (i = 0; num > 0; i++)
	{
		num = num / base;
	}
	return (i);
}

