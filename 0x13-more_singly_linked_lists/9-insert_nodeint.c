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
	unsigned int y = 1;
	listint_t *current = NULL;

	if (*head == NULL)
		return (NULL);
	current = malloc(sizeof(listint_t));
	if (current == NULL)
		return (NULL);
	current->n = n;
	if (idx == 0)
	{
		current->next = *head;
		*head = current;
	}
	else
	{
		for (; *head && y <= idx - 1; y++)
			*head = (*head)->next;
		if (y < idx)
			return (NULL);
		if (y != idx)
		{
			current->next = NULL;
			(*head)->next->next = current;
		}
		else
		{
			current->next = (*head)->next;
			(*head)->next = current;
		}
	}
	return (current);
}
