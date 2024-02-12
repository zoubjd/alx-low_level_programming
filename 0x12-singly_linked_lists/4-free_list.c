#include "lists.h"

/**
* free_list - check code
* discription: frees the whole list
* size_t: the same value as int
* @head: rhr head of the list
* Return: none
*/
void free_list(list_t *head)
{
list_t *old_node = head;
list_t *next;
while (old_node != NULL)
{
next = old_node->next;
free(old_node->str);
free(old_node);
old_node = next;
}
}
