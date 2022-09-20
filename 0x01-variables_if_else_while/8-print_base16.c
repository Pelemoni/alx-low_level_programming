#include<stdio.h>

/**
 * main - print a hexadecimal stringg
 *
 * Return: always (successprinting)
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar (c);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar (c);
	}
	putchar (c);
	return (0);
}
