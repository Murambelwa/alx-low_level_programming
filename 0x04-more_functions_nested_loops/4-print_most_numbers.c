#include "main.h"

/**
 * print_numbers - prints some of the numbers, from 0 to 9
 *
 * Return: void
 */

void print_most_numbers(void)
{
    int number;

    for (number = 0; number < 10; number++)
    {
        if (number == 2 || number == 4)
            continue;
        _putchar('0' + number);
    }
    _putchar('\n');
}
