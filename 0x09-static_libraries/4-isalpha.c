#include"main.h"

/**
 * _isalpha - check if carrecter is lower or upper
 *
 * @c: takes input from other functions
 *
 * Return: 1 if c is true or else 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	return (0);
}
