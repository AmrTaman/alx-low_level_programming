#include"main.h"
#include<stdio.h>
/**
 * power - perform the operation
 * @b: pointer
 * @n: starting point
 * @m: counter
 *
 * Return: integer
 */
unsigned int power(int n, int m, const char *b)
{
	if (*b == 0)
		return (0);
	return ((n * (*b - 48)) + power(n / 2, m, b + m));
}
/**
 *  binary_to_uint - converts binary to integer
 *  @b: pointer to the string
 *
 *  Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int m = 1, i = 1;

	if (b == NULL)
		return (0);
	while (b[m])
	{
		i *= 2;
		if (b[m] != '1' && b[m] != '0')
			return (0);
		m++;
	}
	return (power(i, 1, b));
}
