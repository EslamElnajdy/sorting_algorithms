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
 * bubble_sort - sorts an array of integers in
 * ascending order using the Bubble sort algorithm
 * @array: array to be sorted
 * @size: the size of array
*/

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int swaping;

	if (!array || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		swaping = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap_ele(&array[j], &array[j + 1]);
				swaping = 1;
			}
		}
		print_array(array, size);
		if (swaping == 0)
			break;
	}
}
