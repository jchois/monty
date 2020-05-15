#include "monty.h"

/**
 * free_list - free a double lk list
 * @head: head of the lk list
 *
 * Return: Nothing
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
 * is_number - checks if the push command has a number
 * @chk_strings: character to be checked
 *
 * Return: 0 on failure, 1 on success
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