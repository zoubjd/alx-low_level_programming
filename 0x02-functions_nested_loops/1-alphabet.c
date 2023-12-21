#include <unistd.h>

/**
 * printf_alphabet prints the whole alphabets
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet(void)
{
	return (write(1, "abcdefghijklmnopqrstuvwxyz\n", 26));
}
