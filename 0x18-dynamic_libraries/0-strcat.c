#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: function argument 1
 * @src: function argument 2
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a++])
	{
		b++;
	}
	for (a = 0; src[a]; a++)
	{
		dest[b++] = src[a];
	}
	return (dest);
}
