#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: points to head (first node).
 * Return: pointer to the first node at list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next_node = NULL, *previous_node = NULL;

	for (; *head;)
	{
		next_node = (*head)->next;
		(*head)->next = previous_node;
		previous_node = *head;
		*head = next_node;
	}
	*head = previous_node;
	return (*head);
}
