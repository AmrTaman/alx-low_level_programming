#include "lists.h"
#include <stdio.h>
/**
 * get_nodeint_at_index - prints all the elements of a linked list
 * @head: linked list of type listint_t to print
 * @index: the number
 *
 * Return: number of nodes
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;

	if (head == NULL)
		return (NULL);
	for (; x < index; x++)
		head = head->next;
	if (head == NULL)
		return (0);
	return (head);
}
