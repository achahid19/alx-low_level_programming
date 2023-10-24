#include "lists.h"

/**
 * pop_listint - deletes the head node (first node) of linked list
 * @head: double pointer, that points to a pointer to head (first node)
 * Return: head node's data(n), otherwise if empty 0 is returned.
*/
int pop_listint(listint_t **head)
{
	int n_data;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}
	n_data = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (n_data);
}
