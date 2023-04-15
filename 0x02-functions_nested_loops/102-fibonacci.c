#include<stdio.h>
/**
 * main - prints first 50 fibonacci numbers
 *
 * Return: zero
 */
int main(void)
{
	long sum = 0;
	long x = 1;
	int m;

	for (m = 0; m < 50; m++)
	{
		sum += x;
		x += sum;
	}
	printf("%lu\n", x);
	return (0);
}
