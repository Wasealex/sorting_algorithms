#include "sort.h"
/**
 *insertion_sort_list - uses sorting algorithm 'insertion sort'
 *@list: head pointer to unsorted list to be sorted
 *Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *outer, *inner, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	outer = (*list)->next;
	while (outer != NULL)
	{
		inner = outer->prev;
		temp = outer;

		while (inner != NULL && inner->n > temp->n)
		{
			/*Swap the nodes*/
			if (temp->next != NULL)
				temp->next->prev = inner;

			inner->next = temp->next;
			temp->prev = inner->prev;
			temp->next = inner;
			inner->prev = temp;

			if (temp->prev != NULL)
				temp->prev->next = temp;

			if (inner == *list)
				*list = temp;

			inner = temp->prev;
			print_list(*list);
		}
		outer = outer->next;
	}
}
