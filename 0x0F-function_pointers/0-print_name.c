#include"function_pointers.h"
/**
 * print_name - prints a string
 * @name: pointer to string
 * @f: function callback pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
