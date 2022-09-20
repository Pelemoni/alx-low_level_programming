#include<stdio.h>

/**
 * main - prints the numbers from 0 -9 printing
 *
 * Return:Always (successprinting)
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar (n);
	}
	putchar ('\n');
	return (0);
}
