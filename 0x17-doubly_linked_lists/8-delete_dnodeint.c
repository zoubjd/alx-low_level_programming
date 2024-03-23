#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * delete_dnodeint_at_index - check code
 * Description: delets a node at the wanted index
 *
 * @head: the head of the list
 * @index: the wanted index
 *
 * Return: the wanted node
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *temp;
int idx = index;
int i;

if (head == NULL || *head == NULL)
{
return (-1);
}
temp = *head;
if (idx == 0)
{
*head = temp->next;
if (*head != NULL)
{
(*head)->prev = NULL;
}
free(temp);
return (1);
}
for (i = 0; i < idx - 1 && temp != NULL; i++)
{
temp = temp->next;
}

if (temp == NULL || temp->next == NULL)
{
return (-1);
}
if (temp->next != NULL)
{
temp->next = temp->next->next;
free(temp->next->prev);
temp->next->prev = temp;
}
else
{
free(temp->next);
temp->next = NULL;
}
return (1);
}
