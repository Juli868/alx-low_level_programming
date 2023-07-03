#include "3-calc.h"
#include <stdio.h>
/**
 * op_add - add two numbers
 * @a: first number
 * @b: second number
 * Return: sum
 */
int op_add(int a, int b)
{
	printf("%d", a + b);
	return (a + b);
}
/**
 * op_sub - finds the difference between two numbers
 * @a: first number
 * @b: second number
 * Return: difference
 */
int op_sub(int a, int b)
{
	if (a > b)
	{
		printf("%d", a - b);
		return (a - b);
	}
	printf("%d", b- a);
	return (b - a);
}
/**
 * op_mul - finds the product of two numbers
 * @a: first number
 * @b: second number
 * Return: the product
 */
int op_mul(int a, int b)
{
	printf("%d", a * b);
	return (a * b);
}
/**
 * op_div - find the quotient of two numbers
 * @a: first number
 * @b: second number
 * Return: quotient
 */
int op_div(int a, int b)
{
	if (b != 0)
	{
	       printf("%d", a / b);
	       return (a / b);
	}
	return (-1);
}
/**
 * op_mod - will find the remainder of two numbers
 * @a: first number
 * @b: second number
 * Return: the remainder between two numbers
 */
int op_mod(int a, int b)
{
	printf("%d", a % b);
	return (a % b);
}
