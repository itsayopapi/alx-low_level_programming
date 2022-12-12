#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string being checked
 * @accept: string to check from
 * Return: pointer to s or NULL if no match is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int a, b;

	for (a = 0; s[a]; a++)
	{
		for (b = 0; accept[b]; b++)
		{
			if (s[a] == accept[b])
			{
				break;
			}
		}
		if (accept[b])
		{
			return (s + a);
		}
	}
	return (0);
}
