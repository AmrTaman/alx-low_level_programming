#include<stdio.h>
/**
 * main - habaal
 *
 * Return: Zero
 */
int main(void)
{
	int a = '0';
	int b = '0';
	int c = '0';
	int d = '0';
	int n = 0;

	while (n <= 999)
	{
		if (n % 10 == 9)
			c++;
		else if (n / 10 == 9)
			b++;
		else if (n / 100 == 9)
			a++;
		else
		{
			d++;
		}
		putchar(a);
		putchar(b);
		putchar(' ');
		putchar(c);
		putchar(d);
		if (a == '9' && b == '8' && c == '9' && d == '9')
		{
			putchar('\n');
			break;
		}
		putchar(',');
		putchar(' ');
		if (n == 999)
			n = 0;
		n++;
	}
}
