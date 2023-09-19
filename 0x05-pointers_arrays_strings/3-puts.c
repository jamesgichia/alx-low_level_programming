#include "main.h"

/**
 * _puts - prints a string to the console
 * followe by a new line.
 *
 * @str: pointer to the string to be outputed
 *
 * Return: void.
 */




void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
