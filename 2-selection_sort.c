#include "sort.h"

/**
 * swap_ele - uses to swap the elements
 * @x: the first ele
 * @y: the second ele
*/

void swap_ele(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

/**
 * selection_sort - sorts an array of integers in ascending order
 * using the Selection sort algorithm.
 * @array: array to sort.
 * @size: size of array.
*/
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_ele;

	if (!array || size == 1)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_ele = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_ele])
				min_ele = j;
		}
		if (min_ele != i)
		{
			swap_ele(&array[i], &array[min_ele]);
			print_array(array, size);
		}
	}
}
