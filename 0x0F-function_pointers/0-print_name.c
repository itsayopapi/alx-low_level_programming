#include <stdio.h>

/**
 * print_name - a function that prints a name.
 * @name: parameter name.
 * @f: function.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}

	f(name);
}
