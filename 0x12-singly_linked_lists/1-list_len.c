#include "lists.h"

/**
* list_len - check code
* discription: calculats the elements in a list
* size_t: the same value as int
* @h: singly linked list
* Return: number of nodes
*/

size_t list_len(const list_t *h)
{
size_t nodes;

nodes = 0;

if (h != NULL)
{
while (h != NULL)
{
if (h->str == NULL)
{
return (1);
}
	else
	{
	nodes++;
	h = h->next;
	}
}
}
return (nodes);
}
