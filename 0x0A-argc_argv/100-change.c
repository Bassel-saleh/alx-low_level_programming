#include <stdio.h>
#include <stdlib.h>
/**
 * main - count coins
 * @argc: arguments count
 * @argv: arguments array
 * Return: 0 unless Error occured
 */
int main(int argc, char *argv[])
{
	int pennies, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	pennies = atoi(argv[1]);
	while (pennies > 0)
	{
		coins++;
		if ((pennies - 25) >= 0)
		{
			pennies -= 25;
			continue;
		}
		if ((pennies - 15) >= 0)
		{
			pennies -= 15;
			continue;
		}
		if ((pennies - 10) >= 0)
		{
			pennies -= 10;
			continue;
		}
		if ((pennies - 5) >= 0)
		{
			pennies -= 5;
			continue;
		}
		if ((pennies - 2) >= 0)
		{
			pennies -= 2;
			continue;
		}
		pennies--;
	}
	printf("%d\n", coins);
	return (0);
}
