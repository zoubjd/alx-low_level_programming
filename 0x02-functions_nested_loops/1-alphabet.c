#include <unistd.h>

/**
 * print_alphabet - Entry point
 * Description: 'the program outputs the whole alphabets in lower case'
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
}
