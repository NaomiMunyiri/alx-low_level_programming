#include "main.h"
/**
 * _memset - mem to array
 * @s: arr too set
 * @b: value
 * @n: amt of times
 * Return: char val of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
		s[count] = b;
	return (s);
}
