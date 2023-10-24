#include "lists.h"

/**
 * free_listint - function that frees a linked list
 * @head: pointer to head (first node)
 * Return: void.
*/
void free_listint(listint_t *head)
{
	listint_t *free_node;

	for (; head != NULL;)
	{
		free_node = head;
		head = head->next;
		free(free_node);
	}
}
