#include "main.h"
/**
 * print_last_digit - returns the last digit
 * @n : number to check
 * Return: 0 or 1
 */
int print_last_digit(int n)
{
	int x;

	if (n < 0)
		x = -1 * (n % 10);
	else
		x = n % 10;
	_putchar(x + '0');
	return (x);
}
