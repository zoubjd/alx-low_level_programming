#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * free_dlistint - check code
 * Description: frees the list
 *
 * @head: the head of the list
 *
 */

void free_dlistint(dlistint_t *head)
{
dlistint_t *old_node = head;
dlistint_t *next;

while (old_node != NULL)
{
next = old_node->next;
free(old_node);
old_node = next;
}
}
