#include "lists.h"

/**
* print_list - check code
* discription: printf the elements ofa linked list
* size_t: the same value as int
* @h: singly linked list
* Return: number of nodes
*/


size_t print_list(const list_t *h)
{
size_t nodes;

nodes = 0;

if (h != NULL)
{
while (h != NULL)
{
	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%d] %s\n", h->len, h->str);
	nodes++;
	h = h->next;
}
}
return (nodes);
}
