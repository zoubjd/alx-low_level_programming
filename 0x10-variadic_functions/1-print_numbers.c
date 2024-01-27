#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - check the code
* description: the progrogram prints
* @n: the first int
* @separator: the string to be printed between two ints
* @...: the rest of nums
* Return: Always 0.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{

	int num_args = n;

	int z;

	int i;

	va_list nums;

	va_start(nums, n);



	for (i = 0; i < num_args; i++)
	{
		z = va_arg(nums, int);
		printf("%d", z);
		if (i < (num_args - 1) && separator != NULL)
		{
		printf("%s", separator);
		}
	}
	va_end(nums);
}
