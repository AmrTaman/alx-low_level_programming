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

	for (x = 0; x < 1; x++)
	{
		for (y = 0; y < (size - 1); y++)
		{
			a = a + (size + 1);
			sum = sum + *a;
		}
		printf("%lu, ", sum);
		sum = 0;
		a = b;
		for (y = 0; y < (size - 1); y++)
		{
			a = a + (size - 1);
			sum = sum + *a;
		}
		printf("%lu\n", sum);
		sum = 0;
		a = b;
	}
}
