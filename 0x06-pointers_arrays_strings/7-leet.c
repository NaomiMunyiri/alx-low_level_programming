#include "main.h"

/**
 * *leet - encode into 1337speak
 * @n: input
 * Return: n
 */
char *leet(char *n)
{
	int i, j;
	char s1[] = "aeotl";
	char S1[] = "AEOTL";
	char s2[] = "43071";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (n[i] == s1[j] || n[i] == S1[j])
			{
				n[i] = s2[j];
				break;
			}
		}
	}
	return (n);
}
