#include"main.h"
/**
 * iteration - repeat the process
 * @n: integer
 * @i: test
 *
 * Return: 0 or 1
 */
int iteration(int n, int i)
{
	if (i >= n)
		return (1);
	else if (n % i == 0)
		return (0);
	return (iteration(n, i + 1));
}
/**
 * is_prime_number - prime number detector
 * @n: integer
 *
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (iteration(n, 2));
}
