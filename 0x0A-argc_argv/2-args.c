#include <stdio.h>
#include "main.h"
/**
 * main - program that prints all arguments it receives
 * @argc: number of arguments
 *
 * @argv: arrary name
 * Return: always 0 for success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);

	return (0);
}
