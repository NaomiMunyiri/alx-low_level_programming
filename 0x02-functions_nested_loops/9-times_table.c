#include "main.h"
/**
 * times_table - prints the times table
 * Return: void
 */
void times_table(void)
{
	int a = 0;
	int b;
	int repeat;

	while (a <= 9)
	{
		b = 0;
		while (b <= 9)
		{
			repeat = a * b;
			if (b == 0)
			{
				_putchar('0' + repeat);
			}
			else if (repeat < 10)
			{
				_putchar(' ');
				_putchar('0' + repeat);
			}
			else
			{
				_putchar('0' + repeat / 10);
				_putchar('0' + repeat % 10);
			}
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
}
