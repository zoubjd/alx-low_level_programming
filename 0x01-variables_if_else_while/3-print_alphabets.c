#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 * Description: 'the program outputs the whole alphabets'
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = 0;
int j = 0;
char small[] = "abcdefghijklmnopqrstuvwxyz";
char cap[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
while (i < 26)
{
putchar(small[i]);
i++;
}
while (j < 26)
{
putchar(cap[j]);
j++;
}
putchar('\n');
return (0);
}

