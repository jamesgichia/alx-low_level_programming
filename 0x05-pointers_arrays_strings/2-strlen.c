#include "main.h"
/**
 * _strlen - takes a string and returns its length
 * @s : is a pointer pointing to the address of the
 *  first character of the string
 * The function returns the length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}
