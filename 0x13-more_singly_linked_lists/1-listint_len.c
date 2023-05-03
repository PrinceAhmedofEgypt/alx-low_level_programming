#include "lists.h"

/**
 * linked list elements returned using listint_len
 * traverse linked list type using h
 * nodes number is returned
 */
size_t listint_len(const listint_t *h)
{
size_t num = 0;
 
while (h)
{
num++;
h = h->next;
}
 
return (num);
}
