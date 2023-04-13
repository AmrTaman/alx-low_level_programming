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
	int third;

	for (first = '0'; first <= '9'; first++)
	{
		for (second = '0'; second <= '9'; second++)
		{
			for (third = '0'; third <= '9'; third++)
			{
				if (first != second && second != third && first < third &&
					second < third && first < second)
				{
					putchar(first);
					putchar(second);
					putchar(third);
					if (first == '7' && second == '8' && third == '9')
					{
						putchar('\n');
						break;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
}
