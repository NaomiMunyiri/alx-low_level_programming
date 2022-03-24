#include "main.h"

/**
 * *_strncat - concatenates two strings using at most n bytes from src
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: number of bytes to be concatenated
 *
 * Return: pointer to destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, i;

	for (x = 0; dest[x] != '\0'; x++)
		;
		
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[x + i] = src[i];

	dest[x + i] = '\0';
	return (dest);
}
