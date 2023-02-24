/**
 * _isupper - checks for uppercase alphabet
 * @c: character to check
 * Return: 1 when true otherwise 0
 */

int _isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}
