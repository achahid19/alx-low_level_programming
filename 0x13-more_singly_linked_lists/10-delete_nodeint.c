#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at index of a linked list.
 * @index: index of node to be deleted
 * @head: double pointer, points to a pointer to head (first node)
 * Return: 1 if succeded, otherwise -1.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *temp2;
	unsigned int count;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	for (count = 0; count <= index - 1; count++)
	{
		if (temp->next)
		{
			temp = temp->next;
		}
		else
			return (-1);
	}
	temp2 = temp->next->next;
	free(temp->next);
	temp->next = temp2;
	return (1);
}
