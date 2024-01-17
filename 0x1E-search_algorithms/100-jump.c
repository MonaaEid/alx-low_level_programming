#include "search_algos.h"
#include <math.h>
size_t min(int a, int b){
	if(b>a)
		return a;
		else
		return b;
}
int jump_search(int *array, size_t size, int value)
{
	int step = sqrt(size);
	size_t prev = 0;

	while (array[min(step, size)-1] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", min(step, size) - 1, array[min(step, size) - 1]);
		prev = step;
		step += sqrt(size);
		if (prev >= size)
			return -1;
	}
	printf("Value found between indexes [%li] and [%ld]\n", prev, min(step, size) - 1);
	while (array[prev] < value)
	{
		prev++;

		if (prev == min(step, size))
			return -1;
	}
	if (array[prev] == value)
		{printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		return prev;}
 
	return -1;
}