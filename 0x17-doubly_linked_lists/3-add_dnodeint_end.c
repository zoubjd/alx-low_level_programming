#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_dnodeint_end - check code
 * Description: adds a new node in the end
 *
 * @head: the head of the list
 * @n: content of the node
 *
 * Return: the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *temp;
dlistint_t *new = malloc(sizeof(dlistint_t));

if (new == NULL)
{
return (NULL);
}
if (head == NULL)
{
return (NULL);
}
new->n = n;
new->next = NULL;

if (*head == NULL)
{
new->prev = NULL;
*head = new;
return (new);
}
temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = new;
new->prev = temp;

return (new);
}
