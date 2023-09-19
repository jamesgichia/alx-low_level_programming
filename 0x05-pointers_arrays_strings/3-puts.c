#include "main.h"

/**
 * _puts - prints a string to the console
 * followe by a new line.
 * 
 * @str: pointer to the string to be outputed
*/




void _puts(char *str)
{
    int index = 0;

    while(str[index] != '\0')
    {
        _putchar(index);
        index++;
    }

    _putchar('\n');
}