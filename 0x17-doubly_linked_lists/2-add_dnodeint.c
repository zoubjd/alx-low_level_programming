#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_dnodeint - check code
 * Description: adds a new node in the head
 *
 * @head: the head of the list
 * @n: content of the node
 *
 * Return: the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new = malloc(sizeof(dlistint_t));

if (head == NULL)
{
return (NULL);
}
if (new == NULL)
{
return (NULL);
}

new->n = n;
new->prev = NULL;
new->next = *head;
if (*head != NULL)
{
(*head)->prev = new;
}
*head = new;

return (new);
}
