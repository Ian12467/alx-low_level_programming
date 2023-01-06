#include "search_algos.h"

/**
 * binary_search- searches for a value in arrray of integers
 * @array : pointer to the first elememnt of the array to search.
 * @size: The number of the elememnt in the array.
 * @value: The value to the search for
 * Return: if the value is not present or array is NULL, -1.
 */
int binary_search(int *array, size_t size, int value)
{
	int i, high, low, mid;

	if (!array)
		return (-1);
	low = 0;
	high = size - 1;

	while  (low <= high)
	{
		printf("Searching in array:");
		for (i = low; i < high; i++)
		{
			printf(" %d,", array[i]);
		}
		printf(" %d\n", array[high]);
		mid =  (high + low) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			low =  mid + 1;
		if (array[mid] > value)
			high = mid - 1;
	}
	return (-1);
}
