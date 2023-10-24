#include "lists.h"

/**
 * free_listint2 - function that frees a singly linked list
 * @head: double pointer to a pointer to head (first node)
 * Return: void.
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL || *head == NULL)
	{
		return;
	}
	temp = *head;
	for (; *head != NULL;)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
