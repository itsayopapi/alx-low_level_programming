#include "main.h"
#include <string.h>
/**
 * _strlen - function that returns the length of a string.
 * @s: string pointer
 * Return: string length
 */
int _strlen(char *s)
{
	int _length = 0;

	while (*(s + _length) != '\0')
	{
		_length++;
	}
	return (_length);
}
