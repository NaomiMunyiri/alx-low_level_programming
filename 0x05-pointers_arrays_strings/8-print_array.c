#include "main.h"
#include <stdio.h>
/**
 * print_array - prints elements of array
 * @a: pointer
 * @n: int
 * Return: void
 */

void print_array(int *a, int n)
{
	int x = 0;

	for (n--; n>=0; n--, x--)
	{
		printf("%d", a[x]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
