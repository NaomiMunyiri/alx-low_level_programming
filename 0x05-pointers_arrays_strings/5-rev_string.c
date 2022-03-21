#include "main.h"
/**
 * rev_string - prints string in reverse
 * @s: pointer
 * Return: void
 */

void rev_string(char *s)
{
	int lgth;
	int x;
	int mid;
	char tmp;

	for (lgth = 0; s[lgth] != '\0'; lgth++)
		x = 0;
	mid = lgth / 2;

	while (mid--)
	{
		tmp = s[lgth - x - 1];
		s[lgth - x - 1] = s[x];
		s[x] = tmp;
		x++;
	}
}
