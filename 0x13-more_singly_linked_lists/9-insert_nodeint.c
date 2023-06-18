#include "lists.h"
#include<stdlib.h>
/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x = 0;
	listint_t *current, *ptr = *head;

	if (ptr == NULL)
		return (NULL);
	for (; x < idx - 1 && ptr; x++)
		ptr = ptr->next;
	if (x < idx - 1)
		return (NULL);
	current = malloc(sizeof(listint_t));
	current->n = n;
	current->next = ptr->next;
	ptr->next = current;
	return (current);

}
