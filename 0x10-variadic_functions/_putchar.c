#include <unistd.h>

/**
 * _putchar - writes c to stdout
 * @c: character too print
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}