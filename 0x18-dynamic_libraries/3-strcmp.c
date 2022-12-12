#include "main.h"
#include <string.h>
/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2 - second string being compared
 * Return: string
 */
int _strcmp(char *s1, char *s2)
{
	int n = 0, res = 0;

	while (n)
	{
		if (s1[n] == '\0' && s2[n] == '\0')
		{
			break;
		}
		else if (s1[n] != s2[n])
		{
			res = s1[n] - s2[n];
			break;
		}
		else if (s1[n] == '\0')
		{
			res = s2[n];
			break;
		}
		else if (s2[n] == '\0')
		{
			res = s1[n];
			break;
		}
		else
		{
			n++;
		}
	}
	return (res);
}
