#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * _strlen - string's size
 * @str: string parameter
 * Return: unsigned integer
*/
unsigned int _strlen(const char * const str)
{
		unsigned int size = 0;

		while (str[size])
		{
		size++;
		}
		return (size);
}

/**
 * print_all - prints anything
 * @format: variable's format to display
*/
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0, validableCharacter;
	char *s;

	va_start(ap, format);
	while (format && format[i])
	{
	validableCharacter = 0;
	switch (format[i])
	{
	case 'c':
		printf("%c", va_arg(ap, int));
		validableCharacter = 1;
	break;
	case 'i':
		printf("%i", va_arg(ap, int));
		validableCharacter = 1;
	break;
	case 'f':
		printf("%f", va_arg(ap, double));
		validableCharacter = 1;
	break;
	case 's':
		s = va_arg(ap, char *);
		if (s == NULL)
		s = "(nil)";
		printf("%s", s);
		validableCharacter = 1;
	break;
	}
	if (i < _strlen(format) - 1 && validableCharacter)
	printf(", ");
	i++;
	}
	printf("\n");
	va_end(ap);
}
