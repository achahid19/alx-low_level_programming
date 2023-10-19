#include "lists.h"

/**
 * free_list - function that frees a linked list
 * @head: pointer to head (first node)
 * Return: void.
*/
void free_list(list_t *head)
{
	list_t *free_node;

	for (; head != NULL;)
	{
		free_node = head;
		head = head->next;
		free(free_node->str);
		free(free_node);
	}
}
