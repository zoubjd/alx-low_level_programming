#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * string_toupper - check the code
 * description: the program turns to upper
 * @str: the array
 * Return: Always 0.
 */
char *string_toupper(char *str)
{
char *retstring = str;
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (isalpha(str[i]))
{
str[i] = toupper(str[i]);
}
}
return (retstring);
}

