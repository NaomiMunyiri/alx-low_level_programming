#include "main.h"

/**
 * square - find squareroot
 * @n: int
 * @v1: sqr
 * Return: int
 */

int square(int n, int v1)
{
	if (v1 * v1 == n)
		return (v1);
	else if (v1 * v1 < n)
		return (square(n, v1 + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - sqrt
 * @n: int
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (sqaure(n, 1));
}
