#include "lists.h"

/**
 * check_cycle - checks if linked list contains a cycle
 * @list: linked list to be checked
 * Return: 1 if the list has a cycle, 0 if it does not
 */

int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_t *fast = list;

	if (!list)
		return (0);
	while (slow && fasst && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}
	return (0);
}
