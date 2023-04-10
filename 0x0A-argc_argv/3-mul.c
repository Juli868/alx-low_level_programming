#include <stdio.h>
#include "main.h"
/**
 *main - starts the excution process
 *@argc: number of arguments
 *@argv: the arguments
 *Return: 0 as default
 */
int main(int argc, char *argv[])
{
	int product, first, second;

	if (argc == 3)
	{
		first = atoi(argv[1]);
		second = atoi(argv[2]);
		product = first * second;
		printf("%d\n", product);
	}
	else
	{
		printf("Error");
	}
	return (0);
}
