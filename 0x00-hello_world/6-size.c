#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("size of char: %ZU bytes\n", sizeof(char));
	printf("size of int: %ZU bytes\n", sizeof(int));
	printf("size of long int: %ZU bytes\n", sizeof(long int));
	printf("size of long long int: %ZU bytes\n", sizeof(long long int));
	printf("size of float: %ZU bytes\n", sizeof(float));
	return (0);
}
