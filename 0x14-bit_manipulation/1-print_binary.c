#include"main.h"
#include<stdio.h>
/**
 * print_binary - prints the binary representation of a number
 * @n: the number in decimal
 */
void print_binary(unsigned long int n)
{
	unsigned long int x = 1;
	int count = 0;

	while (x <= n && count < 63)
	{
		x *= 2;
		count++;
	}
	if (x != n && n != 0)
		count--;
	for (; count >= 0; count--)
	{
		x = n >> count;
		if (x & 1)
			_putchar('1');
		else
			_putchar('0');
	}
	if (count == 0)
		_putchar('0');
}
