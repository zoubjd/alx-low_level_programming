#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * print_dlistint - check code
 * Description: prints doubly linked lists
 *
 * @h: the head of the list
 *
 * Return: the number of elements in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
size_t count = 0;

if (h != NULL)
{
while (h != NULL)
{
printf("%d\n", h->n);
count++;
h = h->next;
}
}
return (count);
}
