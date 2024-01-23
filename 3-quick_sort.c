#include "sort.h"

/**
 *quick_sort - sorting array using quick sort algorithm
 *@array: unsorted array
 *@size: size of the array
 *Return: void
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size == 0)
		return;
	quick_sort_recursive(array, size, 0, size - 1);
}
/**
 *swap - swaps two input
 *@array: array
 *@a: fist input
 *@b: second input
 *Return: void
 */
void swap(int *array, int a, int b)
{
	int temp;

	temp = array[a];
	array[a] = array[b];
	array[b] = temp;
}
/**
 *partition - partitions the array and returns the pivot index
 *@array: array to be sorted
 *@size: size of array
 *@low: starting index of the array
 *@high: ending index of the array
 *Return: index of the pivot element
 */
int partition(int *array, size_t size,  int low, int high)
{
	int i, pivot, j;

	pivot = array[high];
	i = low - 1;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap(array, i, j);
			print_array(array, size);
		}
	}
	swap(array, i + 1, high);
	print_array(array, size);

	return (i + 1);
}
/**
 *quick_sort_recursive - recursive function to perform quick sort
 *@array: array to be sorted
 *@size: size of the array
 *@low: starting index of the array
 *@high: ending index of the array
 *Return: void
 */
void quick_sort_recursive(int *array, size_t size, int low, int high)
{
	int pivot;

	if (low < high)
	{
		pivot = partition(array, size, low, high);

		quick_sort_recursive(array, size, low, pivot - 1);
		quick_sort_recursive(array, size, pivot + 1, high);
	}
}
