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

size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;

if (h == NULL)
{
return (0);
}
while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
