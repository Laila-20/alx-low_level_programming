#include "lists.h"

/**
 * free_listint - frees a list of ints
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		head = head->next;
		free(node);
		node = head;
	}
}
