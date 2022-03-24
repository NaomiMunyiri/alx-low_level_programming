#include"main.h"
/**
 * _strncat - concatenates two strings using at most n bytes from src
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: no of bytes to be concatenated
 * Return: pointer to destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int length, j;

	length = 0;
	
	while (dest[length] != '\0')
	{
		length++;
	}
	for (j = 0; j < n && src[j] != '\0': j++, length++)
	{
		dest[length] = src[j];
	}
	dest[length] = '\0';
	return (dest);
}
