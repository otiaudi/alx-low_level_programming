#include "lists.h"

/**
 * print_listint - Function that prints all the elements os a list
 *
 * @h: Head pointer
 *
 * Return: Returns the number of nodes.
 *
 */

size_t print_listint(const listint_t *h)
{
	listint_t const *temp = NULL;
	int count = 0;

	if (h == NULL)
	{
		printf("Linked list is empty");
	}
		temp = h;
	while (temp != NULL)
	{
		count++;
	temp = temp->next;
	}
return (count);

}
