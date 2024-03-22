#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * insert_dnodeint_at_index - check code
 * Description: gets the node at the wanted index
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
int count = 0;
dlistint_t *new = malloc(sizeof(dlistint_t));

if (new == NULL)
{
return (NULL);
}

if (h == NULL)
{
return (NULL);
}

new->n = n;
if (*h == NULL)
{
*h = new;
return (new);
}
temp = *h;
while (temp->next != NULL)
{
if (count == new_index)
{
new->next = temp;
new->prev = temp->prev;
return (new);
}
count++;
temp = temp->next;
}
return (NULL);
}
