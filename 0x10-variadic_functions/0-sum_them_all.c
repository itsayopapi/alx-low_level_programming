#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - add a variable number of integers
 *
 * @n: number of arguments
 *
 * Return: 0 if n is 0, otherwise sum of the integers
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	int sum;
	unsigned int i;

	if (n <= 0)
		return (0);

	va_start(nums, n);
	sum = 0;
	for (i = 0; i < n; ++i)
		sum += va_arg(nums, int);
	va_end(nums);
	return (sum);
}
