#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: string too be appended
 * @src: string appended to dest
 * @n: number of bytes
 *
 * Return: destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int length = 0, dest_len = 0;

	while (dest[length++])
		dest_len++;

	for (length = 0; src[length] && length < n; length++)
		dest[dest_len++] = src[length];

	return (dest);
}
