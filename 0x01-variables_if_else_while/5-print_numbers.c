#include <stdio.h>
/**
 * main - print all single digit nos starting 0
 * Return: 0
 */
int main(void)
{
	char x = '0';

	while (x <= '9')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
