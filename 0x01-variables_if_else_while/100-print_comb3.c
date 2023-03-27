#include <stdio.h>
/**
 * main - printing all possible prints of 2 digits
 *
 * Return: zero
 */
int main(void)
{
	char u = '0';
	char t;

	while (u <= '9')
	{
		t = u+1;
		while (t <= '9')
		{
			putchar(u);
			putchar(t);
			putchar(',');
			putchar(' ');
			t++;
		}
		u++;
	}
}
