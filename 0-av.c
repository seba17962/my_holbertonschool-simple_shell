#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 *	main - print all the arguments
 *	@ac: the number of items in av
 *	@av: a NULL terminated array of strings
 *	Return: always zero.
 */

int main(int __attribute__((unused)) ac, char **av)
{
	int i = 1;

	while (av[i] != NULL)
	{
		printf("%s\n", av[i]);
		i++;
	}
	return (0);
}
