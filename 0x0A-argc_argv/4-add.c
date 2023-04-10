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
	int sum, j, i, d;

	i = 1;
	j = 0;
	sum = 0;
	while (i < argc)
	{
		d = atoi(argv[i]);
		if (_isdigit(d) != 0)
		{
			sum = sum + atoi(argv[i]);
		}
		else
			j++;
		i++;
	}
	if (j != 0)
	{
		printf("Error");
		return (1);
	}
	else
	{
		printf("%d\n", sum);
		return (0);
	}
}
