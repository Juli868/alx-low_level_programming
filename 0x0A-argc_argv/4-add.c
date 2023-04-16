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
	int sum, i, d;

	i = 0;
	sum = 0;
	d = atoi(argv[i]);
	while (i < argc)
	{
		if (d > 0)
		{
			sum = sum + d;
			i++;
		}
		else 
		{
			printf("error");
			return (1);
			/*exit(1);*/
		}
	}
		printf("%d\n", sum);
		return (0);
}
