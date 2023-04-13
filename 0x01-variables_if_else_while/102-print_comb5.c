#include<stdio.h>
/**
 * main - habaal
 *
 * Return: Zero
 */
/**
 * calc - printing
 * member 'a': is 1
 * member 'b': is 1
 * member 'c': is 1
 * member 'd': is 1
 * 
 * Return: zero
 */
int calc(int a, int b, int c, int d)
{
		putchar(a);
		putchar(b);
		putchar(' ');
		putchar(c);
		putchar(d);
		if (a == '9' && b == '8' && c == '9' && d == '9')
		{
			putchar('\n');
			return (0);
		}
		putchar(',');
		putchar(' ');
		return (0);
}
int main(void)
{
int a;
int b;
int c;
int d;

for (a = '0'; a <= '9' ; a++)
{
	for (b = '0'; b <= '9'; b++)
	{
		for (c = '0'; c <= '9'; c++)
		{
			for (d = '0'; d <= '9'; d++)
			{
				if (a != c || b != d)
				{
					if (a == c && b < d)
					{
						calc(a, b, c, d);
					}
					else if (a < c)
					{
						calc(a, b, c, d);
					}
				}
			}
		}
	}
}
return (0);
}
