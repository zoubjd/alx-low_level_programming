#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * insert_dnodeint_at_index - check code
 * Description: adds a node at the wanted index
 *
 * @h: the head of the list
 * @idx: the wanted index
 * @n: the content of the node
 *
 * Return: the wanted node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *temp;
int new_index = idx;
int i;
dlistint_t *new = malloc(sizeof(dlistint_t));

if (new == NULL)
{
return (NULL);
}
if (h == NULL)
{
return (NULL);
}
if (idx == 0)
{
return (add_dnodeint(h, n));
}
temp = *h;
for (i = 0; i < new_index - 1 && temp != NULL; i++)
{
temp = temp->next;
}
if (temp == NULL)
{
return (NULL);
}

new->n = n;
new->next = temp->next;
if (temp->next != NULL)
{
temp->next->prev = new;
}

new->prev = temp;
temp->next = new;
return (new);
}
