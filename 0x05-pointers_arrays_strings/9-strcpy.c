#include "main.h"
/**
 * *_strcpy - copies string pointed to it
 * @dest: char
 * @src: char
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int x = -1;

	do {
		x++;
		dest[x] = src[x];
	} while (src[x] != '\0');

	return (dest);
}
