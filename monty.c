#include "monty.h"

/**
 *main - run monty
 *@argc: number arguments
 *@argv: name argument
 *Return: 0 success
 */

int main (int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file \n");
		exit(EXIT_FAILURE)
	}

	newfile = fopen(argv[1], "r");

	if (newfile = NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	return (0);
}
