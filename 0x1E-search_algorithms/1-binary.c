#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: pointer to the first element of the list
 * @size: number of element
 * @value: value to look for
 * Return: the index of the value or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;
	size_t mid = 0;
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	while(low <= high)
	{
		printf("Searching in array: ");

		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
			else
				printf("\n");

		}
		mid = low + (high - low) / 2;
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	
	}

	return (-1);

}
