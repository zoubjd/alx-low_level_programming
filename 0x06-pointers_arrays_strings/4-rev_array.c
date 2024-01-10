#include "main.h"

/**
 * reverse_array - check the code
 * description: the program reverses an array
 * @a: the array
 * @n: the lenght of the array
 * Return: Always 0.
 */

void reverse_array(int *a, int n)
{
int endpoint = n - 1;
int i;
int temp;
for (i = 0; i < endpoint; i++)
{
if (i < endpoint)
{
temp = a[i];
a[i] = a[endpoint];
a[endpoint] = temp;
endpoint--;
}
else
{
break;
}
}
}
