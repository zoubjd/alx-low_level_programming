#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * sum_dlistint - check code
 * Description: calculates the sum of all nodes
 *
 * @head: the head of the list
 *
 * Return: the sum
 */

int sum_dlistint(dlistint_t *head)
{
int count = 0;
if (head == NULL)
{
return (0);
}
while (head != NULL)
{
count += head->n;
head = head->next;
}
return (count);
}
