#include "main.h"

/**
 * _write_char - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _write_char(char c)
{
	/* 
	*uses a function from unistd that writes to stdout
	*wite(regular file, const void *buf, number of chars to write)
	*write returns the num of chars return to stdout which we need to keep track of
	*/
	return (write(1, &c, 1));
}

