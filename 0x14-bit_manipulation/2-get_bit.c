#include"main.h"
#include<stdio.h>
/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: index of desired bit
 *
 * Return: 0 or 1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int x = 1, count = 0;
	while (x < n && count < 64)
	{
		x *= 2;
		count++;
	}
	if (x != n && n != 0)
		count--;
	if (index > count)
		return -1;
	return ((n >> index) & 1);
}
