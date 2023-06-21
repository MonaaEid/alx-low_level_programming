#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @chr: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void positive_or_negative(int i);
int largest_number(int a, int b, int c);
void print_remaining_days(int month, int day, int year);
int convert_day(int month, int day);
#endif /* MAIN_H */
