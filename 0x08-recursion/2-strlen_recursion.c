#include"main.h"
/**
 * _strlen_recursion - counts char of a string
 * @s: pointer
 *
 * Return: i
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(++s));
	}
	else
	{
		return (0);
	}
}
