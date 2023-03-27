#include "main.h"
/**
 *swap_int - will swap two integers
 *@a: first number to swap
 *@b: second number to be swapped
 */
void swap_int(int *a, int *b)
{
	int juli;
	juli = *a;
	*a = *b;
	*b = juli;
}
