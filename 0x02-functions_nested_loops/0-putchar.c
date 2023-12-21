#include "main.h"
#include <unistd.h>
/**
 * main - Entry point
 * Description: 'the program outputs _putchar'
 * Return: Always 0 (Success)
 */

int main(void)
{
char str[] = "_putchar";
int i = 0;
while (i < 8)
{
write(0, &str[i], 1);
i++;
}
return (0);
}

