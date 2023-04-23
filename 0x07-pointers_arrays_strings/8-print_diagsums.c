#include"main.h"
#include<stdio.h>
/**
 * print_diagsums - prints sum of diagonals
 * @a: two dimensional array
 * @size: size*sze array
 */
void print_diagsums(int *a, int size)
{
	int x, y;
	int *b = a;
	long sum = 0;

	for (x = 0; x <= 1; x++)
	{
		for (y = 0; y <= (size - 1); y++)
		{
			if (x == 0)
			{
				sum = sum + *a;
				a = a + (size + 1);
			}
			else
			{
				sum = sum + *a;
				a = a + (size - 1);
			}
		}
		if (x == 0)
			printf("%lu, ", sum);
		else
		{
			printf("%lu\n", sum);
		}
		sum = 0;
		a = b;
	}
}
