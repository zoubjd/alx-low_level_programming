#include <stdio.h>

/**
 * main - check the code
 * description: the program prints its arguments
 * @argc: the array
 * @argv: the content
 * Return: Always 0.
 */

int main(int argc , char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
} 
return (0);
}
