#include "holberton.h"

/**
 * main - debugging example
 * Return: 0
 */
int main(void)
{
	char *holberton = "_putcher";

	while (*holberton)
	{
		_putchar(*holberton);
		holberton++;
	}
	_putchar('\n');
	return (0);
}
