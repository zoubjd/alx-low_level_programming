#include "main.h"

/**
 * puts_half - check the code
 * description: the program prints half s
 * @str: the string
 * Return: Always 0.
 */

void puts_half(char *str)
{
int count = 0;
const char *end = str;
while (*end)
{
count++;
end++;
}
if (count % 2 == 0) {
end = str + count / 2;
}
else
{
end = str + (count - 1) / 2;
}
while (*end != '\0') {
_putchar(*end);
end++;
}
_putchar('\n');
}
