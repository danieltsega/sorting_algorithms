#include "sort.h"

/**
 * insertion_sort_list - Insertion sort
 * function
 *
 * @list: doubly linked list
 * Return: no return
 */

void insertion_sort_list(listint_t **list)
{

	listint_t *ptr, *temp;

	if (!list)
		return;
	ptr = *list;
	while (ptr)
	{

		while (ptr->next && (ptr->n > ptr->next->n))
		{

			temp = ptr->next;
			ptr->next = temp->next;
			temp->prev = ptr->prev;
			if (ptr->prev)
			{

				ptr->prev->next = temp;
			}
			if (temp->next)
			{

				temp->next->prev = ptr;
			}
			ptr->prev = temp;
			temp->next = ptr;
			if (temp->prev)
				ptr = temp->prev;
			else
				*list = temp;
			print_list(*list);
		}
		ptr = ptr->next;
	}
}
