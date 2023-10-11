#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - calculates the arguments of a functions
 * @argc: arguments number
 * @argv: arguments array
 * Return: 0 if succeed
 */
int main(int argc, char *argv[])
{
	int x, y;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	x = atoi(argv[1]);
	y = atoi(argv[3]);
	f = get_op_func(argv[2]);
	if (f == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3][0] == '0')
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", f(x, y));
	return (0);
}
