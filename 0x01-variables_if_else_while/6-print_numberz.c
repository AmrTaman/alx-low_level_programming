#include <stdio.h>

/**
   * main - prints base ten digits without char
   *
   * Return: zero
   */
int main(void)
{
	for (char i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
