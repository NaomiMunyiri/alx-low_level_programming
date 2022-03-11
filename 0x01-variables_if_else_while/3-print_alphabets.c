#include <stdio.h>
/**
 * main - program tat prints the alphabet in lowercae and then in uppercase
 * Return: 0
 */
int main(void)
{
	char y = 'a';

	while (y <= 'z')
	{
		putchar(y);
		y++;
	}

	y = 'A';

	while (y <= 'Z')
	{
		putchar(y);
		y++;
	}

	putchar('\n');
	return (0);
}
