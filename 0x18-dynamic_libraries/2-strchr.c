#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string being checked
 * @c: character being located
 * Return: pointer to character
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
