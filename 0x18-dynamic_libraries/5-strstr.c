#include "main.h"
/**
 * _strstr - finds a substring
 * @haystack: string to be checked
 * @needle: substring to be found
 * Return: pointer to beginning of substring or NULL if no match
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int a = 0;
	unsigned int b = 0;

	while (haystack[a])
	{
		while (needle[b] && (haystack[a] == needle[0]))
		{
			if (haystack[a + b] == needle[b])
			{
				b++;
			}
			else
			{
				break;
			}
		}
		if (needle[b])
		{
			a++;
			b = 0;
		}
		else
		{
			return (haystack + a);
		}
	}
	return (0);
}
