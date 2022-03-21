#include "main.h"
/**
 * _puts - prints string with new line
 * @str: string
 * Return: void
 */

void _puts(char *str)
{
	int count = 0;

	while (*(str + count) != '\0')
	{
		if (*(str + count) != '"')
			_putchar(*(str + count));
		count++;
	}
	_putchar('\n');
}
