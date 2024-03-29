#include "main.h"
#include <stdio.h>

/**
 * check_prime - check if all num < n ca div it
 * @n: int
 * @resp: int
 * Return: int
 */
int check_prime(int n, int resp)
{
	if (resp >= n && n > 1)
		return (1);
	else if (n % resp == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, resp + 1));
}

/**
 * is_prime_number - ret 1 if so
 * @n: int
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
