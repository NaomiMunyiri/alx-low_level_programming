#include "main.h"
/**
 * print_chessboard - board
 * @a: prints
 * Return: output
 */
void print_chessboard(char (*a)[8])
{
	int x, y;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; j < 8; y++)
		{
			_putchar(a[x][y]);
		}
		_putchar('\n');
	}
}
