#include "main.h"
#include <string.h>
/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
int i;
i = 0;
char test[] = positive_or_negative(i);
char result[] = "0 is zero";
if (strcmp(test, result) == 0)
{
return (0);
}
else
{
return (1);
}
}

