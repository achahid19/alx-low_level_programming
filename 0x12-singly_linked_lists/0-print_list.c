#include "lists.h"

/**
 * print_list - funtion that prints all elements of a linked list
 * @h: pointer to the first node (head).
 * Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t count;

	for (count = 0; h->next != NULL; count++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
