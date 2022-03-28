#include "main.h"
/**
 * _strstr - loctaes substring
 * @haystack: string
 * @needle: string
 * Return: pointer to beginning
 */
char *_strstr(char *haystack, char *needle)
{
	int x;
	int y;
	int a = 0;

	for (x = 0; haystack[x] != '\0'; x++)
	{
		j = 0;
		a = i;
		while (haystack[a] == needle[y] && needle[y] != '\0')
		{
			y++;
			a++;
		}
		if (needle[y] == '\0')
		{
			return (haystack + x);
		}
	}
	return (0);
}
