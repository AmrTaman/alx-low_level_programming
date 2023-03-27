#include <stdio.h>
/**
 * main - printing all possible prints of 2 digits
 *
 * Return: zero
 */
int main(void)
{
	while (char u <= '9')
	{
		t = u+1;
		while (char t <= '9')
		{
			putchar(u);
			putchar(t);
			putchar(',');
			putchar(' ');
			t++;
		}
		u++;
	}
	return (0);
}
