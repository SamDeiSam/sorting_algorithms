#include "sort.h"
/**
 * selection_sort - function sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: pointer to array
 * @size: size of the array
 **/
void selection_sort(int *array, size_t size)
{
	size_t i, j, k, m;
	int aux, flag;

	if (array)
	{
		for (i = 0; i < size; i++)
		{
			aux = array[i];
			flag = 0;
			for (j = i; j < size ; j++)
			{
				if (array[j] < aux)
				{
					m = j;
					aux = array[j];
					flag = 1;
				}
			}
			if (flag == 1)
			{
				k = array[i];
				array[i] = array[m];
				array[m] = k;
				print_array(array, size);
			}
		}
	}
}
