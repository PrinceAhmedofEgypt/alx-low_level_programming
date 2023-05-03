#include "lists.h"
/**
 * print the elements using print_listint
 * h makes us print linjed list
 * we should return the number of the nodes at the end
 */
size_t print_listint(const listint_t *h)
{
 size_t num = 0;

 while (h)
 {
 printf("%d\n", h->n);
 num++;
 h = h->next;
 }

 return (num);
}
