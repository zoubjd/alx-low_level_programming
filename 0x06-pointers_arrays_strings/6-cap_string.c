#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * string_toupper - check the code
 * description: the program turns to upper
 * @str: the array
 * Return: Always 0.
 */
char *cap_string(char *str)
{
char *retstring = str;
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (!isalpha(str[i]) && !isalnum(str[i]))
{
str[i + 1] = toupper(str[i + 1]);
}
}
return (retstring);
}


