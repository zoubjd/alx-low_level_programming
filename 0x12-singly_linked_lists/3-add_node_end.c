#include "lists.h"

/**
* add_node_end - check code
* discription: creates and adds a new node
* size_t: the same value as int
* @head: rhr head of the list
* @str: the content of the node
* Return: the node
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node = malloc(sizeof(list_t));
	list_t *last = *head;

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (last->next != NULL)
	{
		last = last->next;
	}

	last->next = new_node;

	return (new_node);
}
