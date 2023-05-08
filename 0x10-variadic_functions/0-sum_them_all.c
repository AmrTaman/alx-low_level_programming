#include<stdarg.h>
/**
 * sum_them_all - performs sum of numbers
 * @n: number of numbers
 *
 * Return: integer
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int x;
	va_list num;

	if (n == 0)
		return (0);
	va_start(num, n);
	for (x = 0; x < n; x++)
		sum += va_arg(num, int);
	return (sum);
}
