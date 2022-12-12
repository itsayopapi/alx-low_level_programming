#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the memory area to be filled
 * @b: character
 * @n: number of bytes needed
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
