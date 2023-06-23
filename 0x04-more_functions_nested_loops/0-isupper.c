#include "main.h"

/**
 * _isupper - checks a character is uppercase
 *
 * @c: charater
 * Return: int
 */
int _isupper(int c)
{
    if (c >= 'A' && c <= 'Z') 
    {
        return (1);
    }
    else
    {
        return (0);
    }
}
