#include"main.h"
/**
 * strlen_recursion - counts char of a string
 * @s: pointer
 *
 * Return: i
 */
int i = 0;
int _strlen_recursion(char *s)
{
	if (*s)
	{
		_strlen_recursion(++s);
		i++;
	}
	return i;
}
