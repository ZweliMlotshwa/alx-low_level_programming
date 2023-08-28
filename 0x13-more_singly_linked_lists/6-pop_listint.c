#include "lists.h"

/**
 * pop_listint - Deletes the head node of
 *		a listint_t linked list
 *		and returns the head node's data (n).
 * @head: A pointer to the head of the list.
 *
 * Return: The data (n) of the deleted head node,
 * or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	int first_node
	listint_t *temp, *next;

	if (*head == NULL)
		return (0);

	temp = *head;
	next = temp->next;

	first_node = temp->n;

	free(temp);

	*head = next;

	return (first_node);
}
