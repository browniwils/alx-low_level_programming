/**
 * hash_djb2 - implementing the djb2 algorithm
 * @str: string to generate hash value
 * Return: hash value
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int ch;

	hash = 5381;
	while ((ch = *str++))
	{
		hash = ((hash << 5) + hash) + ch;
	}
	return (hash);
}
