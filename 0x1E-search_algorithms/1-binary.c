#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - searches for a value in an array of integers
 * @array: array to search
 * @size: size of the array
 * @value: value to search
 * Return: index of value
 */

int binary_search(int *array, size_t size, int value)
{
if (array == NULL)
{
return (-1);
}

return (binary_search_recursive(array, 0, size - 1, value));
}

/**
 * binary_search_recursive - searches for a value in an array of integers
 * @array: array to search
 * @left: left index
 * @right: right index
 * @value: value to search
 * Return: index of value
 */

int binary_search_recursive(int *array, int left, int right, int value)
{
int mid;

if (left > right)
{
return (-1);
}
mid = (left + right) / 2;
print_array(array + left, right - left + 1);

if (array[mid] == value)
{
return (mid);
}
if (array[mid] > value)
{
return (binary_search_recursive(array, left, mid - 1, value));
}

return (binary_search_recursive(array, mid + 1, right, value));
}

/**
 * print_array - prints an array
 * @array: array to print
 * @size: size of the array
 * Return: void
 */

void print_array(int *array, size_t size)
{
size_t i;

printf("Searching in array: ");
for (i = 0; i < size; i++)
{
if (i != 0)
{
printf(", ");
}
printf("%d", array[i]);
}
printf("\n");
}
