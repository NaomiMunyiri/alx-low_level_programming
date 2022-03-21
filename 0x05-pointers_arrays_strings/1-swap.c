i#include "main.h"
/**
 * swap_int - swaps value of two ints
 * @x: pointer of one int
 * @y: pointer of one int
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int new;

	new = *a;
	*a = *b;
	*b = new;
}
