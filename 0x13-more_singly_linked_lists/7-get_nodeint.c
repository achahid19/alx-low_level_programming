#include "lists.h"

/**
 * get_nodeint_at_index - return a node in an given index
 * @head: pointer to head (first node)
 * @index: the position of the node in the linked list, starting at 0.
 * Return: node in index or NULL if doesn't exist.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	for (count = 0; count < index; count++)
	{
		if (head->next != NULL)
			head = head->next;
		else
			return (NULL);
	}
	return (head);
}
