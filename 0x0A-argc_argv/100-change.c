#include <stdio.h>
#include "stdlib.h"

/**
 * main - check the code
 * description: the program prints its arguments
 * @argc: the array
 * @argv: the content
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
int coins = 0;
if (argc != 2)
{
printf("Error\n");
return (1);
}
else
{
int cents = atoi(argv[1]);
if (cents < 0)
{
printf("%d\n", 0);
}
else
{
while (cents > 0)
{
if (cents >= 25)
{
cents -= 25;
coins++;
}
else if (cents >= 10)
{
cents -= 10;
coins++;
}
else if (cents >= 5)
{
cents -= 5;
coins++;
}
else if (cents >= 2)
{
cents -= 2;
coins++;
}
else if (cents >= 1)
{
cents -= 1;
coins++;
}
}
printf("%d\n", coins);
}
}
}
