#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - program that multiplies two numbers
 * @argc: the number of arguments
 * @argv: the array name
 * Return: always 0 for success
 */
int main(int argc, char *argv[])
{
	int i, num;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num = 1;

		for (i = 1; i < 3; i++)
		num *= atoi(argv[i]);

		printf("%d\n", num);
	}
	return (0);
}
