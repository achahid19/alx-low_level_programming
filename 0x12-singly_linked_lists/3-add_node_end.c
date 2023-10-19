#include "lists.h"

/**
 * add_node_end - function that adds a new node at
 * the beginning of a linked list
 * @head: double pointer to the pointer pointed to head (first node)
 * @str: string to duplicate
 * Return: address of the new node, otherwise NULL
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_node;
	list_t *temp;

	if (str == NULL || head == NULL)
		return (NULL);
	n_node = malloc(sizeof(list_t));
	if (n_node == NULL)
	{
		return (NULL);
	}
	n_node->str = strdup(str);
	if (n_node->str == NULL)
	{
		free(n_node);
		return (NULL);
	}
	n_node->len = strlen(str);
	if (*head == NULL)
		*head = n_node;
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = n_node;
	}
	return (n_node);
}
