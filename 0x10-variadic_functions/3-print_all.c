#include "variadic_functions.h"

/**
 * print_all - prints anything.
 *
 * @format: list of types of arguments passed to the function.
 *
 * Return: void.
 */

void print_all(const char * const format, ...)
{
	va_list params;
	char *str_param, *separator;
	unsigned int i;

	va_start(params, format);

	/* initializing the separator */
	separator = "";

	i = 0;
	while (format && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(params, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(params, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(params, double));
				break;
			case 's':
				str_param = va_arg(params, char *);
				if (str_param == NULL)
					str_param = "(nil)";
				printf("%s%s", separator, str_param);
				break;
			default:
				i++;
				continue;
		}
		/* updating the separator */
		separator = ", ";
		i++;
	}

	printf("\n");
	va_end(params);
}

