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
			}
			else if (x % 2 == 0)
			{
				m += x;
			}
		}
		else
		{
			break;
		}
		x += sum;
	}
	printf("%lu\n", m);
	return (0);
}
