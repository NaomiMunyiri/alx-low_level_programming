#include "main.h"
/**
 * _strspn - length of substring
 * @s: string
 * @accept: substring
 * Return: values
 */
unsigned int _strspn(char *s, char *accept)
{
	int x;
	int y;
	unsigned int result = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; s[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				result++;
				break;
			}
		}
		if (s[y] == '\0')
			return (Result);
	}
	return (result);
}
