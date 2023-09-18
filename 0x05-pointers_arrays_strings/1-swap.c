#include "main.h"
/**
 * swap_int - check the code
 * Swaps the the values of @a and @b
 * Has no return value
*/

void swap_int(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}