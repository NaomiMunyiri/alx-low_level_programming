#include "main.h"
#include <unistd.h>

/**
 * _puthcar - write the character c to stdout
 * @c: character to print
 *
 * Return: 1
 * on error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
