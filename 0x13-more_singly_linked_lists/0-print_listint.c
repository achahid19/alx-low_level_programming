#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements of linked list
 * @h: pointer to head (first node)
 * Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
