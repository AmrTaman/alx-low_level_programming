#include<stdio.h>
/**
 * main - prints first 50 fibonacci numbers
 *
 * Return: zero
 */
int main(void)
{
	unsigned long int sum = 0;
	unsigned long int x = 1;
	int m;

	for (m = 0; m < 49; m++)
	{
		sum += x;
		x += sum;
		printf("%lu, ", sum);
		if (m == 49)
			printf("%lu\n", x);
		else
		{
		printf("%lu, ", x);
		}
	}
	return (0);
}
