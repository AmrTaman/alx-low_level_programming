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

	if (n == 0)
		return;
	va_start(num, n);
	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(num, int));
		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(num);
}
