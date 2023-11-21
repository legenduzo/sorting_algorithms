#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linkedlist
 * using insertion algorithm
 * @list: the doubly linked list to sort
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *a, *b;

	if (!list || !(*list))
		return;

	current = (*list)->next;

	while (current)
	{
		a = current;
		current = current->next;

		while (a->prev && a->n < a->prev->n)
		{
			b = a->prev;
			if (a->next)
				a->next->prev = a->prev;
			a->prev->next = a->next;
			a->prev = b->prev;
			a->next = b;

			if (b->prev)
				b->prev->next = a;
			else
				*list = a;
			b->prev = a;
			print_list(*list);
		}
	}
}
