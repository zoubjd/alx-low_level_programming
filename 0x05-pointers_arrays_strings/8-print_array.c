#include "main.h"
#include <stdio.h>

/**
 * print_array - check the code
 * description: the program prints an array
 * @a: the array
 * @n: the num of elements to print
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
int i = 0;
for (i = 0; i < n; i++)
{
if (i == (n - 1))
{
printf("%d", a[i]);
}
else
{
printf("%d, ", a[i]);
}
}
printf("\n");
}

