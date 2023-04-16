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
	long m = 0;

	while (1)
	{
		sum += x;
		if (sum <= 4000000 || x <= 4000000)
		{
			if (sum % 2 == 0)
			{
				m += sum;
				printf("%lu", m);
			}
			else if (x % 2 == 0)
			{
				m += x;
				printf("%lu", m);
			}
		else
		{
			break;
		}
		x += sum;
	}
	return (0);
}
