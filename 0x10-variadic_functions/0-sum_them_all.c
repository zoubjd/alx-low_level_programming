#include <stdio.h>
#include <stdarg.h>

/**
* sum_them_all - check the code
* description: the progrogram sums
* @n: the first int
* @...: the rest of nums
* Return: Always 0.
*/

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;

	int num_args = n;

int z;

	int i;

	va_list nums;

	va_start(nums, n);



	for (i = 0; i < num_args; i++)
	{
		z = va_arg(nums, int);
		sum += z;
	}
	va_end(nums);
	return (sum);
}
