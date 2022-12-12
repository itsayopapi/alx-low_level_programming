#include "main.h"
/**
 *_isalpha - checks for alphabetic character
 *
 *@c:the int to check for function argument
 *
 * Return:0
 *
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
