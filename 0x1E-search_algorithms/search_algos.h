#ifndef SEARCH_ALGOS_H_
#define SEARCH_ALGOS_H_
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int binary_search_recursive(int *array, size_t low, size_t high, int value);
int jump_search(int *array, size_t size, int value);
size_t min(int a, int b);
#endif
