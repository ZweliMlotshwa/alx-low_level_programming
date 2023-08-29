#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	listint_t *head = NULL;

	for (int i = 1; i <= 10; i++)
	{
	add_nodeint_end(&head, i * 100);
	print_listint(head);
	printf("-----------------\n");
	}

	for (int i = 0; i < 10; i++)
	{
	delete_nodeint_at_index(&head, 0);
	printf("-----------------\n");
	}

	print_listint(head);

	return (0);
}

