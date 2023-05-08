#include<stdarg.h>
#include<stdio.h>
/**
 * print_numbers - prints numbers
 * @separator: seperator between numbers
 * @n: number of values
 */
void print_numbers(const char *separator,
		const unsigned int n, ...)
{
	va_list num;
	unsigned int x;

	if (separator == NULL || n == 0)
		return;
	va_start(num, n);
	printf("%d", va_arg(num, int));
	for (x = 0; x < (n - 1); x++)
		printf("%s%d", separator, va_arg(num, int));
	printf("\n");
}
