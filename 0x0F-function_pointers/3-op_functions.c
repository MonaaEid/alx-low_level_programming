#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - function to sum twe numbers
 * @a: first number
 * @b: second number
 * Return: sum result of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function to subtract two numbers
 * @a: first number
 * @b: second number
 * Return: subtract result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function to multiply two numbers
 * @a: first number
 * @b: second number
 * Return: multiply result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function to division two numbers
 * @a: first number
 * @b: second number
 * Return: division result
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function to get module of two numbers
 * @a: first number
 * @b: second number
 * Return: module result
 */
int op_mod(int a, int b)
{
	return (a % b);
}
