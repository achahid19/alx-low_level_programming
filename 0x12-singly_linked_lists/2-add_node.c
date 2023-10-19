#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a linked list
 * @head: double pointer to the pointer pointed to head (first node)
 * @str: string to duplicate
 * Return: adsress of the new element, otherwise NULL
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *n_node;

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
	n_node->next = *head;
	*head = n_node;
	return (n_node);
}
