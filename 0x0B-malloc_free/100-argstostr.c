#include <stdlib.h>
#include "main.h"

/**
 * argstostr - joins all arguments
 * @acc: number of arguments
 * @av: list of arguments
 * Return: new string otherwise NULL
 */

char *argstostr(int acc, char **av)
{
	int i = 0, j, k = 0, size = 0;
	char *arg;

	if (acc == 0 || av == NULL)
	{
		return (NULL);
	}

	while (i < acc)
	{
		j = 0;
		while (av[i][j])
		{
			size++;
			j++;
		}
		size++;
		i++;
	}

	arg = malloc((sizeof(char) * size) + 1);
	if (arg == NULL)
	{
		return (NULL);
	}

	k = 0;
	for (i = 0; i < acc; i++)
	{
		j = 0;
		while (av[i][j])
		{
			arg[k] = av[i][j];
			j++;
			k++;
		}
		arg[k] = '\n';
		k++;
	}
	arg[k] = '\0';
	return (arg);
}
