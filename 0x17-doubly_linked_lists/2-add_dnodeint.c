#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * dlistint_len - check code
 * Description: calculates the lenght of doubly linked lists
 *
 * @h: the head of the list
 *
 * Return: the number of elements in the list
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
