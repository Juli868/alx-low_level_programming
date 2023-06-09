#include "main.h"
#include <stdio.h>
/**
 *main - willcalculate the changeto give aperson if given a certain amount
 *@argc: number of aguments proided
 *@argv:arguments given
 *Return: 0 always
 */
int main(int argc, char *argv[])
{
	int given;
	int i;

	if (argc != 2)
		printf("Error\n");
	else
	{
		given = atoi(argv[1]);
		i = 1;
		if (given > 25)
		{
			while (given > 25)
			{
				given = given - 25;
				i++;
			}
		}
		else if (given > 10)
		{
			while (given > 10)
			{
				given = given - 10;
				i++;
			}
		}
		else if (given > 5)
		{
			while (given > 5)
			{
				given = given - 5;
				i++;
			}
		}
		else if (given > 2)
		{
			while (given > 2)
			{
				given = given - 2;
				i++;
			}
		}
		else if (given > 1)
		{
			while (given > 1)
			{
				given = given - 1;
				i++;
			}
		}
		else
			printf("0\n");
		printf("%d\n",i);
	}
	return(0);
}
