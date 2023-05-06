#include"main.h"
/**
 * flip_bits - bits needs to be changed
 * @n: number
 * @m: second number
 *
 * Return: integer
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m, count = 0;
	int i, current;

	for (i = 63; i >= 0; i--)
	{
		current = x >> i;
		if (current & 1)
			count++;
	}
	return (count);
}
