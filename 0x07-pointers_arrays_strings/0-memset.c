#include "main.h"

/**
 * _memset -  a function that fills memory with a constant byte.
 * @n: bytes of the memory
 * @s: pointer
 * @b: constant byte
 * Return: pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
