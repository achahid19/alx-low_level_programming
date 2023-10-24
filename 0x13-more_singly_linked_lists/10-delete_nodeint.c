#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: double pointer that points to a pointer to head (first node)
 * @n: const integer to add in the new node
 * Return: pointer to the new node, otherwise NULL
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}

/**
 * delete_nodeint_at_index - deletes a node at index of a linked list.
 * @index: index of node to be deleted
 * @head: double pointer, points to a pointer to head (first node)
 * Return: 1 if succeded, otherwise -1.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *temp2;
	unsigned int count, count1 = 0;

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
		if ((*head) && (*head)->next)
		{
			if (((*head)->next) == NULL && count < index - 1)
				return (-1);
			*head = (*head)->next;
		}
		else
			return (-1);
	}
	temp2 = *head;
	*head = (*head)->next;
	free(temp2);
	temp2 = NULL;
	while (count > 0)
	{
		add_nodeint(&(temp2), temp->n);
		temp = temp->next;
		count--;
		count1++;
	}
	while (count1 > 0)
	{
		add_nodeint(&(*head), temp2->n);
		temp2 = temp2->next;
		count1--;
	}
	return (1);
}
