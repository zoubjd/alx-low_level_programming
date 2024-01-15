#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * description: the program prints its arguments
 * @argc: the array
 * @argv: the content
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
int result = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", result);
return (0);
}
}
