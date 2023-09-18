#include "main.h"

/**
 * swap_int - check the code
 * @a : the value of this variable should be swapped with that of @b
 * @b : the value of this variable should be swapped with that of @a
 * Has no return value
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
