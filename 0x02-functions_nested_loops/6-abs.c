#include "main.h"
#include <stdio.h>

/**
 * _abs - is a function that computes the absolute value of an integer
 * @c:  it iis the int that will use for the argument of the function
 * Return: 0
 */

int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
		return (c * -1);
}



