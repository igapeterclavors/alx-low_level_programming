#include "main.h"
/**
 * print_last_digit - print last digit of any number
 * @n: an operand to accept digit
 *
 * Return: an integer value 0 otherwise 1
 */
int print_last_digit(int n)
{
	n = n % 10;
	_putchar(n);
	return (n);
}
