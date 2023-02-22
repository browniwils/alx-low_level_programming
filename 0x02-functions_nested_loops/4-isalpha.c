#include "main.h"

/**
 * _isalpha checks and confirm an alphabet character
 * Return: 1 when a @ch is an alphabet otherwise 0
 */

int _isalpha(int ch)
{
return ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
}
