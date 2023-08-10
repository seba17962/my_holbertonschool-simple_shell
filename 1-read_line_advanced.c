#include <stdio.h>
#include <stdlib.h>

int
main(void)
{
	char buffer[1024];

	printf("$ ");

	if (fgets(buffer, sizeof(buffer), stdin) != NULL)
		printf("%s", buffer);
	else
		printf("Error");

	return (0);
}
