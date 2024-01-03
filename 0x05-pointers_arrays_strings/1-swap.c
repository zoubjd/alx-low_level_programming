#include "main.h"

/**
 * swap_int - check the code
 * description: swaps the values of two ints
 * @a: the first int
 * @b: the second int
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
