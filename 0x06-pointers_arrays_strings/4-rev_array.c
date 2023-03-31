#include "main.h"
/**
 *reverse_array - reverses th array
 *@a: the arrya to reverse
 *@n: the length of the array
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int array[] = {0};

	while (a[i])
	{
		array[i] = a[n - i];
	}
	while (n >= 0)
	{
		array[n] = a[n];
		n--;
	}
}
