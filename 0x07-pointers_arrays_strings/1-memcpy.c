#include "main.h"
/**
 * _memcpy - copies src to dest
 * @dest: destination
 * @src: source
 * @n: amt of times
 * Return: returns string value
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
