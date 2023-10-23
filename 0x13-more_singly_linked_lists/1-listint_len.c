#include "lists.h"

/**
 * listint_len - counts number of nodes in the linked list
 * @h: pointer to head (first node)
 * Return: number of nodes
*/
size_t listint_len(const listint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
		h = h->next;
	return (count);
}
