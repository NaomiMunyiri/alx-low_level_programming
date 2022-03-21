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

	for (x = 0; x < n ; x++)
	{
		if (x == n - 1)
			printf("%d", *(a + i));
		else
			printf("%d, ", *(a + i));
	}
	printf("\n");
}
