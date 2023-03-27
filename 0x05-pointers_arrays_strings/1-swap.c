#include "main.h"

/**
 * swap_int - function that takes a pointer to an int as parameter
 * and updates the value it points to to 98
 * @a: first pointer
 * @b: second pointer
 */

void swap_int(int *a, int *b)
{
	*a = b;
	*b = a;

}
