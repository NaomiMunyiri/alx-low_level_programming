#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds pos numbers
 * @argc: int
 * @argv: list
 * Return: 0
 */

int main(int argc, char const *argv[])
{

	int x , y, add = 0;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (!isdigit(argv[x][y]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[x]);
	}
	printf("%d\n", add);
	return (0);
}
