#include "search_algos.h"

/**
 * exponential_search - searches for a value in arrray of integers
 * @array : pointer to the first elememnt of the array to search.
 * @size: The number of the elememnt in the array.
 * @value: The value to the search for
 * Return: if the value is not present or array is NULL, -1.
 * othewise, the first index where the value is located.
 * Description: Prints a value everytime it is compared in the array.
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t exp, low, high, i, mid;

	if (!array)
		return (-1);

	exp = 1;
	if (array[exp] == value)
		return (exp);
	while ((array[exp] < value) && (exp < size))
	{
		printf("value checked array[%ld] = [%d]\n", exp, array[exp]);
		exp *= 2;
	}
	low = exp / 2;
	high = exp - 1;
	printf("value found between indexes [%ld] and [%ld]\n", low, high);
}
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t i;

	while  (low <= high)
	{
		printf("Searching in array:");
		for (i = low; i < high; i++)
		{
			printf(" %d,", array[i]);
		}
		printf(" %d\n", array[i]);
		mid = (high + low) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			low  = mid + 1;
		if (array[mid] > value)
			high = mid - 1;
	}
	return (-1);
}
