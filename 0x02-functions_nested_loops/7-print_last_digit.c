#include "main.h"

/**
 * print_last_digit - Pls prints the last digit of a number.
 * @n: The number in question for.
 * Return: Value of the last digit now
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;
	_putchar(last_digit + '0');
	return (last_digit);
}

