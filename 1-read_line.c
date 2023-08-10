#define  _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

/**
 * main - prints a $ and wait, then print.
 * Return: always zero.
 */

int main(void)
{
	char *next_line = NULL;
	size_t len = 0;
	ssize_t read;

	printf("$ ");

	read = getline(&next_line, &len, stdin);

	if (read != -1)
		printf("%s", next_line);
	else
		printf("Error");

	free(next_line);
	return (0);
}
