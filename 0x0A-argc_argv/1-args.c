#include <stdio.h>

/**
 * main - check the code
 * description: the program prints num of com line args
 * @argc: the array
 * @argv: the content
 * Return: Always 0.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
