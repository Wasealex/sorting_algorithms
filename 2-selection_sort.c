#include "sort.h"
/**
 *selection_sort - uses sorting algorithm (selection sort)
 *@array: unsorted array
 *@size: size of the array
 *Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t idx, min_idx, j;
	int temp;

	if (array == NULL || size == 0)
		return;

	for (idx = 0; idx < size - 1; idx++)
	{
		min_idx = idx;
		for (j = idx + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
				min_idx = j;
		}
		if (array[idx] > array[min_idx])
		{
			temp = array[min_idx];
			array[min_idx] = array[idx];
			array[idx] = temp;
			print_array(array, size);
		}
	}
}
