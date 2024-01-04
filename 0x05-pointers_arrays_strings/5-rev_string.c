#include "main.h"

/**
 * rev_string - check the code
 * description: the program prints rev s
 * @s: the string
 * Return: Always 0.
 */

void rev_string(char *s)
{
const char *end = s;
while (*end)
{
end++;
}
end--;
while (end)
{
*s = *end;
end--;
}
}

