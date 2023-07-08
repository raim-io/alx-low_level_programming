#include <stdio.h>

/**
 * main - prints all arguments it receives.
 *
 * @argv: array of arguments.
 * @argc: number of arguments received.
 *
 * Return: Always 0 (success).
 */

int main (int argc, char *argv[])
{
	int index;

	for (index = 0; index < argc; index++)
	{
		printf("%s\n", argv[index]);
	}

	return (0);
}

