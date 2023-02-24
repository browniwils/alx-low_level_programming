/**
 * _isdigit - checks for digit
 * @c: character to check
 * Return: 1 when true otherwise 0
 */

int _isdigit(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}

	return (0);
}
