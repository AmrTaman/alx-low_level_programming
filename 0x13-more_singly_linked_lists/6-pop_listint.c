#include"lists.h"
/**
 * pop_listint - deletes the head of a node
 *
 * @head: pointer
 * Return: *head
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int x;

	if (*head == NULL)
		return (0);
	current = *head;
	x = (*head)->n;
	*head = (*head)->next;
	free(current);
	return (x);
}
