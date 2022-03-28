#include "main.h"
/**
 * _strchr - locates char in string
 * @s: string to locate char
 * @c: char to find
 * Return: to first place
 */
char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == c)
		{
			return (s + x);
		}
	}
	if (s[x] == c)
		return (s + x);
	return (0);
}
