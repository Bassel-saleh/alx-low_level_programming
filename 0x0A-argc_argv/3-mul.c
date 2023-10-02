#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers which are two arguments
 * @argc: arguments count
 * @argv: arguments array
 * Return: 0 if two numbers are found
 */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);

		printf("%d\n", i * j);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
