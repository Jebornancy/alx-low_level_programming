#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums of all of its parameters
 * @n: number of parameters
 *
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
	sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
