#include "main.h"

/**
 * print_sign - ffunction to check for a sign of aaa number
 * @n:  this is the int that will use for the argument of the function
 * Return: 0
 */

int print_sign(int n)

{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(‘0’);
		return (0);
	}
}

