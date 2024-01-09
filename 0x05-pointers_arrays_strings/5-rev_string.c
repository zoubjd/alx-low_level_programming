#include "main.h"
#include <string.h>

/**
 * rev_string - check the code
 * description: the program prints rev s
 * @s: the string
 * Return: Always 0.
 */

void rev_string(char *s)
{
char *start = s;
char *end = s + strlen(s) - 1;
char temp;
while (end > start)
{
temp = *start;
*start = *end;
*end = temp;
start++;
end--;
}
}

