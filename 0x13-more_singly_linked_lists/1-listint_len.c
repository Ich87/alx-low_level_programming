#include "lists.h"

/**
 * listint_len -returns all the number of elements in a linked lists structure
 * @h: linked list of type listint_t to traverse
 *
 * Return: number of all  nodes in the structure
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
