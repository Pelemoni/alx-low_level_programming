#include "main.h"

/**
 * _memset - mpointer 3
 * @s: pointed destination
 * @b: constant byte
 * @n: bytes
 * Return: Always 0 (Successme)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	
	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

