#include"main.h"

/**
 *
 * _islower - to check if funcitons are lowercase
 * @c: checks input of fuctions
 *
 * return: 0 always
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
