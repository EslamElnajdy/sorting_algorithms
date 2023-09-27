#include "sort.h"



/**
 * swap_node - swap a node
 * @node: the node to swap
 * @list: list
 * Return: pointer to the current node
*/
listint_t *swap_node(listint_t *node, listint_t **list)
{
	listint_t *prev = node->prev, *curr = node;

	prev->next = curr->next;
	if (curr->next)
		curr->next->prev = prev;
	curr->next = prev;
	curr->prev = prev->prev;
	prev->prev = curr;
	if (curr->prev)
		curr->prev->next = curr;
	else
		*list = curr;
	return (curr);
}


/**
 * insertion_sort_list - sorts a doubly linked list
 * @list: double linked list
*/

void insertion_sort_list(listint_t **list)
{

	listint_t *curr;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	curr = (*list)->next;

	while (curr)
	{
		while ((curr->prev) && (curr->prev->n > curr->n))
		{
			curr = swap_node(curr, list);
			print_list(*list);
		}
		curr = curr->next;
	}
}
