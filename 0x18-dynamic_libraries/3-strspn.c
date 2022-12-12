#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to source string
 * @accept: string searching
 * Return: string
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n, m;

	for (m = 0; *(s + m); m++)
	{
		for (n = 0; *(accept + n); n++)
		{
			if (*(s + m) == *(accept + n))
				break;
		}
		if (*(accept + n) == '\0')
			break;
	}
	return (m);
}
