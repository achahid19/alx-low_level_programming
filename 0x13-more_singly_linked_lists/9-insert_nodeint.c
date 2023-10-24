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
 * insert_nodeint_at_index - function that inserts a new node at a given index
 * @idx: index where the new node should be added
 * @head: double pointer, that pointes to a pointer to head (first node)
 * @n: integer data(n)
 * Return: pointer to the new node inserted, otherwise NULL.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *temp = *head;
	listint_t *temp2;
	unsigned int count, count1 = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		new_node = add_nodeint(&(*head), n);
		return (new_node);
	}
	for (count = 0; count < idx - 1; count++)
	{
		if ((*head) != NULL)
		{
			*head = (*head)->next;
		}
		else
			return (NULL);
	}
	new_node = add_nodeint(&(*head), n);
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
	return (new_node);
}
