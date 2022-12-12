#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: destination of copied memory
 * @src: source of the copied memory
 * @n: number of bytes being copied
 * Return: pointer to copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m = 0;

	for (; m < n; m++)
	{
		dest[m] = src[m];
	}
	return (dest);
}
