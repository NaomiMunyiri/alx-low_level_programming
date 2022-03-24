#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: where pointer is returned to
 * @src: source of pointer
 * Return: destination
 */

char *_strcat(char *dest, char *src)
{
	int c = -1, i;

	for (i = 0; dest[i] != '\0'; i++)

		do { 
			c++;
			dest[i] = src[c];
			i++;
		} while (src[c] != '\0');

	return (dest);
}
