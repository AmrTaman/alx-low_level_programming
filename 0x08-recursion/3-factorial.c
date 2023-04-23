#include"main.h"
/**
 * factorial - finds factorial of a number
 * @n: integer
 *
 * Return: i * factorial(i-1)
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
