#include<stdio.h>

/**
 * main - ommit some alphabet printing
 *
 * Return: Always (successprinting)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar (c);
		}
	}
	putchar ('\n');
	return (0);
}
