#include <unistd.h>

/**
 *print_alphabet_x10 - Entry point
 * Description: 'the program outputs the  alphabets in lower case ten time'
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
int i = 0;
while (i < 10)
{
write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
i++;
}
}
