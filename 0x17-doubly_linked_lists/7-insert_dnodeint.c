#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given \
 * position in a dlistint_t list
 * @h: The pointer to the head node's address
 * @idx: The position at which to add the new node
 * @n: The item to store in the new node
 *
 * Return: A pointer to the new node or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL, *node = NULL;
	unsigned int i = 0;

	if (h != NULL)
	{
		node = *h;
		while ((i != idx) && (node != NULL))
		{
			node = node->next;
			i++;
		}
		if ((i == idx) && (i != 0) && (node != NULL))
		{
			new_node = malloc(sizeof(dlistint_t));
			if (new_node != NULL)
			{
				new_node->n = n;
				new_node->next = node;
				if (node != NULL)
				{
					if (node->prev != NULL)
					{
						node->prev->next = new_node;
					}
					node->prev = new_node;
					if (i == 0)
						*h = new_node;
				}
			}
		}
	}
	return (new_node);
}
