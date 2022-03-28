#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints diagonal summaries
 * @a: array
 * @size: size oof diag
 */
void print_diagsums(int *a, int size)
{
	int x, y = 0, z = 0;

	for (x = 0; x < size * size; x += (size + 1))
		y += a[x];
	for (x = size - 1; x < (size * size) - (size - 1); x += (size - 1))
		z += a[x];
	printf("%d, %d\n", y, z);
