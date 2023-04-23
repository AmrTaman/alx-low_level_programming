#include"main.h"
/**
 * sqr - finds square root
 * @i: testing integer
 * @n: powerd integer
 *
 * Return i;
 */
int sqr(int i, int n)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	return (sqr(i + 1, n));
}
/**
 * _sqrt_recursion - finds square root of natural numbers
 * @n: integer
 *
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqr(0, n));
}	
