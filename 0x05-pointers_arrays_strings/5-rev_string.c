#include "main.h"

/**
 * rev_string - Reverses a string.
 *
 * @s: String to be reversed.
 *
 * Return: void.
 */

void rev_string(char *s)
{
	int  counter_1, counter_2, string_length;
	char tmp;

	counter_1 = 0;
	string_length = 0;

	while (s[counter_1] != '\0')
	{
		counter_1++;
	}

	string_length = counter_1 - 1;

	/*
	 * for (counter_2 = string_length - 1;
	 *		counter_2 >= 0;
	 *		counter_2--)
	 * {
	 *	_putchar(s[counter_2]);
	 * }
	 */

	for (counter_2 = 0; counter_2 < counter_1 / 2;
			counter_2++)
	{
		tmp = s[counter_2];
		s[counter_2] = s[string_length];
		s[string_length--] = tmp;
	}
}

