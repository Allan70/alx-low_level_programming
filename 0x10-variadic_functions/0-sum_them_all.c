#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Sums of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to sum.
 *
 * Return: If n == 0 - 0.
 *         Else - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i, sum = 0;

	va_start(nums, n);

	for (i = 0; i < n; i++)
    {
		sum += va_arg(nums, int);
    }

	va_end(nums);

	return (sum);
}