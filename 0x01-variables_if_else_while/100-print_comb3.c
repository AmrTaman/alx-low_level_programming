#include<stdio.h>
/**
 * main - alphabet
 *
 * Return: zero
 */
int main(void)
{
	int first;
	int second;

	for (first = '0'; first <= '9'; first++)
	{
		for (second = '0'; second <= '9'; second++)
		{
			if (first != second && first < second)
			{
				putchar(first);
				putchar(second);
				if (first == '8' && second == '9')
				{
					putchar('\n');
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
