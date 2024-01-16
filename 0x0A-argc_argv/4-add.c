#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - check the code
 * description: the program prints its arguments
 * @argc: the array
 * @argv: the content
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
if (argc == 1)
{
printf("%d\n", 0);
}
else
{
int result = 0;
int i, j;
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]) && argv[i][j] != '-')
{
printf("Error\n");
return 1;
}
}
result += atoi(argv[i]);
}
printf("%d\n", result);
}
return 0;
}
