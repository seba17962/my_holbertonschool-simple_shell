#define  _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int
main(void)
{
	char *string = NULL;
	char *token = NULL;
	char word[30];
	size_t len = 0;
	ssize_t read;

	printf("$ ");

	read = getline(&string, &len, stdin);
	if (read != -1)
	{
		token = strtok(string, " ");
		if (token == NULL)
			return (-1);
		while (token != NULL)
		{
			strcpy(word, token);
			printf("%s\n", word);
			token = strtok(NULL, " ");
		}
	}
	free(string);
	return (0);
}
