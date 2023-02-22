#include "main.h"

/**
 * _isalpha checks and confirm an alphabet character
 * @ch: checking alphabet
 * Return: 1 when a @ch is an alphabet otherwise 0
 */

int _isalpha(int ch)
{
return ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'));
}
