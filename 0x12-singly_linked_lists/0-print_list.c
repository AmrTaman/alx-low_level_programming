#include"lists.h"
#include<stdio.h>
/**
 * print_list - prints elements of a list
 *
 * @h: head
 * Return: integer
 */
size_t print_list(const list_t *h)
{
	size_t rep = 0;

	for (; h; h = h->next)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		rep++;
	}
	return (rep);
}
