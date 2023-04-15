#include<stdio.h>
/**
 * main - printing sum of multiples
 *
 * Return: zero
 */
int main(void)
{
	int sum = 0;
	int x;

	for (x = 0; x <= 1024; x++)
	{
		if (x % 3 == 0 || x % 5 == 0)
			sum += x;
	}
	printf("%d\n", sum);
	return (0);
}
