#include<stdio.h>

/**
 * main - prints the numbers ftom 0 - 9 printing
 *
 * Return: always (successprinting)
 */
int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar (n);
	}
	putchar ('\n');
	return (0);
}
