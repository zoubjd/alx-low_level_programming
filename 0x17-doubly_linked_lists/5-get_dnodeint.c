#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * get_dnodeint_at_index - check code
 * Description: gets the node at the wanted index
 *
 * @head: the head of the list
 * @index: the wanted index
 *
 * Return: the wanted node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
int new_index = index;
int count = 0;
if (head == NULL)
{
return (NULL);
}
while (head != NULL)
{
if (count == new_index)
{
return (head);
}
count++;
head = head->next;
}
return (NULL);
}
