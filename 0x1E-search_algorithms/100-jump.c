#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in arrray of integers
 * @array : pointer to the first elememnt of the array to search.
 * @size: The number of the elememnt in the array.
 * @value: The value to the search for
 * Return: if the value is not present or array is NULL,
 * -1.the first index where the value is located.
 * Description: Prints a value everytime it is compared in the array.
 */

int jump_search(int *array, size_t size, int value)
{
	size_t jump;
	size_t temp = 0;

	if (array == NULL)
		return (-1);

	jump = 0;
	while (jump < size)
	{
		temp = jump;
		jump = jump + sqrt(size);
		if (array[jump] >= value)
		{
			printf("Value checked array[%ld] = [%d]\n", temp, array[temp]);
			printf("Value found between indexes [%ld] and [%ld]\n", temp, jump);
			break;
		}
		printf("Value checked array[%ld] = [%d]\n", temp, array[temp]);
	}
	if (array[min(jump, size)] < value)
		printf("Value found between indexes [%ld] and [%ld]\n", temp, jump);
	while (temp < min(size, jump))
	{
		printf("Value checked array[%ld] = [%d]\n", temp, array[temp]);
		temp = temp + 1;
		if (array[temp] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", temp, array[temp]);
			return (temp);
		}
	}
	return (-1);
}
/**
 * min - checks the one that is smaller
 * @a: to be checked
 * @b: to be checked
 * Return: Either a or b the smaller between them
 */
size_t min(size_t a, size_t b)
{
	if (b > a)
		return (a);
	else
		return (b);
}
