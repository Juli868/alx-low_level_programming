#include <stdlib.h>
#include <time.h>
/**
 * main()- is the starting of excution
 *Return: if succeeded
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		puts("is positive");
	else if (n == 0)
		puts("\nis zero");
	else
		puts("\nis negative");
	return (0);
}