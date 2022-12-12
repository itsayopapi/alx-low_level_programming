#include "main.h"
/**
 * _islower - checks lowercase letters.
 *
 * @c: function parameter
 *
 * Return:0
 *
*/
int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
	else
		return (0);
}
