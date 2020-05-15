#include "monty.h"

/**
 * free_l - free a double linked list
 * @head: head of the linked list
 * Return: Void
 */

void free_l(stack_t *head)
{
	stack_t *aux;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
}

/**
 * _isnumber - checks if the push command has a number
 * @chk_strings: character to be checked
 * Return: 0 on fail, 1 success
 */

int _isnumber(char *chk_strings)
{
	if (!chk_strings)
		return (0);

	if (*chk_strings == 45)
		chk_strings++;
	while (*chk_strings != '\0')
	{
		if (!isdigit(*chk_strings))
			return (0);
		chk_strings++;
	}
	return (1);
}
