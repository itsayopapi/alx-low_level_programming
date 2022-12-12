#include "main.h"
#include <string.h>
/**
 * _strncpy - copies a string
 * @dest: function argument 1
 * @src: function argument 2
 * @n: function argument 3
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
