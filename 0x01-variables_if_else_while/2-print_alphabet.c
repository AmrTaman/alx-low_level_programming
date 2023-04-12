#include <stdio.h>

/**
   * main - print alphabet in lowercase
   *
   *Return: zero
   */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
