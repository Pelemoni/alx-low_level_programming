#include<stdio.h>

/**
 * main-print a hexadecimalstring printing
 *
 * Return: always (successprinting)
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar (c);
	}
	putchar (c);
	return (0);
}
