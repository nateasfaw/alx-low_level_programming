#include "lists.h"

/**
*list_len - counts the number of elements in a linked list_t
*@h: linked list
*Return: the number of elements in a linked list_t
*/

size_t list_len(const list_t *h)
{
int count = 0;
while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
