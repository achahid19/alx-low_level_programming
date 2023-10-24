#include "lists.h"

/**
 * sum_listint - function that sum all data(n) of a linked list
 * @head: pointer to head (first node)
 * Return: sum of all data(n).
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	for (; head != NULL;)
	{
		sum += head->n;
		head = head->n;
	}
	return (sum);
}
