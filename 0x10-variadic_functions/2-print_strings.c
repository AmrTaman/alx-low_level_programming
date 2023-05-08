#include<stdarg.h>
#include<stdio.h>
/**
 * print_string - prints strings
 * @separator: separator between strings
 * @n: number of arguments
 */
void print_strings(const char *separator,
		const unsigned int n, ...)
{
	va_list st;
	unsigned int x;
	char *store;

	va_start(st, n);
	for (x = 0; x < n; x++)
	{
		store = va_arg(st, char *);
		if (store)
			printf("%s", store);
		else
			printf("(nil)");
		if (x != (n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(st);
}
