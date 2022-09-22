#include "main.h"

/**
 * print_number- do print an integer for me pls
 * @n:integer to be printed printed for me
 *
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	if ((num / 10) > 0)
		print_number(num / 10);
	_putchar((num % 10) + '0');
}

