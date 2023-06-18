#include"lists.h"
#include<stdlib.h>
#include<string.h>
/**
 * add_node - adds node to the end of a list
 *
 * @head: pointer of the head
 * @str: string to be added to the list
 *
 * Return: head
 */
list_t *add_node(list_t **head, const char *str)
{
	int x = 0;
	list_t *current = NULL;

	current = malloc(sizeof(list_t));
	if (current == NULL)
		return (NULL);
	current->str = strdup(str);
	while (str[x])
		x++;
	current->len = x;
	current->next = *head;
	*head = current;
	return (*head);
}
