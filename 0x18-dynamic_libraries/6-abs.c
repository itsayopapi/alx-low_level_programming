#include "main.h"
/**
 *_abs - computes the absolut value of an integer
 *
 * @c:function argument
 * Return:0
 *
*/
int _abs(int c)
{
	if (c == 0 || c > 0)
	{
		return (c);
	}
	else
		return (c * -1);
}
