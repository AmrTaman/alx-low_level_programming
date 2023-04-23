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
	int sum = 0;

	for (x = 0; x < 1; x++)
	{
		for (y = 0; y < (size - 1); y++)
		{
			a = a + (size + 1);
			sum = sum + *a;
		}
		printf("%d, ", sum);
		sum = 0;
		a = b;
		for (y = 0; y < (size - 1); y++)
		{
			a = a + (size - 1);
			sum = sum + *a;
		}
		printf("%d\n", sum);
		sum = 0;
		a = b;
	}
}
