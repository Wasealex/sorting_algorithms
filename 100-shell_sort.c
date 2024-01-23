#include "sort.h"
/**
 *shell_sort - sorting using shell sort by knuth sequence
 *@array: unsorted array
 *@size: size of the array
 *Return: void
 */
void shell_sort(int *array, size_t size)
{
	size_t interval, i, j;
	int temp;

	interval = 1;
	while (interval <= size / 3)
	{
		interval = interval * 3 + 1;
	}

	while (interval > 0)
	{
		for (i = interval; i < size; ++i)
		{
			temp = array[i];
			j = i;

			while (j >= interval && array[j - interval] > temp)
			{
				array[j] = array[j - interval];
				j -= interval;
			}

			array[j] = temp;
		}
		print_array(array, size);

		interval = (interval - 1) / 3;
	}
}
