#include<stdio.h>

/**
 * main - prints the alphabet in reversal order
 *
 * Return:Always(successprintinh)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar ('\n');
	return (0);
}
