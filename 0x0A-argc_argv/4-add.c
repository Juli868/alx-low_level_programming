#include <stdio.h>
#include "main.h"
/**
 *main - starts the excution process
 *@argc: number of arguments
 *@argv:arguments given
 *Return: 0when no error or 1 if there is
 */
int main(int argc, char *argv[])
{
	int sum, i;

	i = 1;
	sum = 0;
	if (argc > 0)
	{
		while (i < argc)
		{
			sum = sum + atoi(argv[i]);
			i++;
		}
	}
	else
	{
		printf("error");
		return (1);
	}
	printf("%d\n", sum);
	return (0);
}
