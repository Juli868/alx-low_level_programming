#include <stdio.h>
#include "main.h"
/**
 *main - starts the excution process
 *@argc: number of arguments
 *@argv: arguments in string form
 *Return: 0 as default
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
