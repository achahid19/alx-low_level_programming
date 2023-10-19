#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list
 * @h: pointer to the head of a linked list (first node)
 * Return: number of nodes
*/
size_t list_len(const list_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
		h = h->next;
	return (count);
}
