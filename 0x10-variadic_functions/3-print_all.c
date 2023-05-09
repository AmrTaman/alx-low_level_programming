#include"variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include<stddef.h>
/**
 * struct func_data - struct for choosing
 * @op: character
 * @f: function pointer
 */
typedef struct func_data
{
	char op;
	void (*f)(va_list);
} func_data;
/**
 * c - character retreive
 * @data: argument for data pointer
 */
void c(va_list data)
{
	 printf("%c", va_arg(data, int));
}

/**
 * i - integer retreive
 * @data: argument for data pointer
 */

void i(va_list data)
{
	printf("%d", va_arg(data, int));
}
/**
 * f - float retreive
 * @data: argument for data pointer
 */

void f(va_list data)
{
	printf("%f", va_arg(data, double));
}

/**
 * s - string retreive
 * @data: argument for data pointer
 */
void s(va_list data)
{
	char *word;

	word = va_arg(data, char *);
	if (word == NULL)
		printf("(nil)");
	else
		printf("%s", word);
}

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int x = 0, m = 0, rep = 0;
	va_list ptr;

	func_data data[] =
	{
		{'c', c},
		{'i', i},
		{'f', f},
		{'s', s}};

	va_start(ptr, format);
	while(format[x])
	{
		while ((data[m].op))
		{
			if ((data[m].op) == format[x] && rep == 0)
				(*data[m].f)(ptr);
			else if ((data[m].op) == format[x])
			{
				printf(", ");
				(*data[m].f)(ptr);
			}
			m++;
			rep++;
		}
		rep = 0;
		m = 0;
		x++;
	}
	printf("\n");
}


