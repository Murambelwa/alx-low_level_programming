#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks a character is a digit
 *
 * @c: charater
 * Return: int
 */

int _isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return (1);
    else
        return (0);
}
