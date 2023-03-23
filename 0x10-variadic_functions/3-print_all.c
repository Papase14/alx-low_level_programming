#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: list of all types of arguments passed to the function
 *
 * Return: Nothing.
*/
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j = 0, c = 0;
	char *str;
	const char formatTypes[] = "cifs";

	va_start(args, format);
	while (format && format[i])
	{
		while (formatTypes[j])
		{
			if (format[i] == formatTypes[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, char)), c = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int)), c = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, float)), c = 1;
				break;
			case 's':
				str = va_arg(args, char *), c = 1;
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str)
				break;
		} i++;
	} printf("\n"), va_end(args);
}
