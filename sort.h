#ifndef _SORT_H
#define _SORT_H

#include <stdio.h>


/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/**The prototype for print array fun**/

void print_array(const int *array, size_t size);

/**The prototype for print list fun**/

void print_list(const listint_t *list);

/**The prototype for the bubble sort**/

void bubble_sort(int *array, size_t size);

/**The prototype for selection sort**/

void insertion_sort_list(listint_t **list);


#endif
