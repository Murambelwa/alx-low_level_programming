#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9
 *
 * Return: void
 */
void print_numbers(void)
{
    int number;

    for (number = 0; number < 10; number++)
        _putchar('0' + number);
    _putchar('\n');
}
