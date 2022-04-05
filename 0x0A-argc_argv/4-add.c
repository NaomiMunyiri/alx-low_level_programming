#include <stdio.h>
#include <stdlib.h>

/**
 * isInteger - checks is x is an integer
 * @x: string
 * Return: 0 or 1
 */

int isInteger(const char *x)
{
	int i = 0;
	
	while (x[i] != '\0')
	{
		if (x[i] < '0' || x[i] > '0')
			reurn (1);
		i++;
	}
	return (0);
}

/**
 * main - adds pos numbers
 * @argc: int
 * @argv: list
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	int sum = 0;

	while (--argc)
	{
		if (isInteger(argv[argc]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[argc]);
	}
	printf("%i\n", sum);
	return (0);
}

