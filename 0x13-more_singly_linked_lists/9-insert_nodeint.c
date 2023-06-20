#include "lists.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * insert_nodeint_at_index - inserts a new node in a linked list
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int y;
	listint_t *current, *tmp;

	tmp = *head;
	current = malloc(sizeof(listint_t));
	if (current == NULL)
		return (NULL);
	current->n = n;
	current->next = NULL;
	if (idx == 0)
	{
		current->next = tmp;
		tmp = current;
		return (current);
	}
	for (y = 0; y < idx - 1; y++)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}
	current->next = tmp->next;	
	tmp->next = current;
	return (current);
}
