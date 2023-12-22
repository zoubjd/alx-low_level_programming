#include <unistd.h>
#include <unistd.h>
#include "main.h"
/**
 * print_last_digit - Entry point
 * Description: 'the program outputs the last digit of n'
 * @n: is the ccharacter that's checked
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
    int last_digit = n % 10;
    if (last_digit < 0)
    {
        last_digit = -last_digit;
    }
    _putchar(last_digit + '0');
    return last_digit;
}

