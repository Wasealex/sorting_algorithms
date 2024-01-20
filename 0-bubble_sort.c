#include "sort.h"
/**
 *bubble_sort - sort an array using bubble sort
 *@array: numbers to be sorted
 *@size: size of array
 *Return: Void
 */
void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t idx, j;

	if (array == NULL || size == 0)
		return;
	for (idx = 0; idx < size; idx++)
	{
		for (j = 0; j < size - idx - 1; j++)
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		print_array(array, size);
	}
}
