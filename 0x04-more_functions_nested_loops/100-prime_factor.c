#include<stdio.h>
/**
 * main - prints largest prime number
 *
 * Return: zero
 */
int main(void)
{
	long int i = 612852475143;
 	long int largest = 0;
	long int n;

	for(n = 2; n <= i; n++)
	{
		if (i % n  == 0)
		{
			i = i / n;
			if (largest < n)
				largest = n;
			n = 1;
		}
	}
	printf("%lu\n", largest);
	return (0);
}
