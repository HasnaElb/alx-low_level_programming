#include "main.h"
/**
 * reverse_array - function that reverses the contenet of an array of integers
 * @a: an input array
 * @n: the number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, temp, end;

	end = n - 1;
	for (i = 0; i < end; i++, end--)
	{
		temp = a[end];
		a[end] = a[i];
		a[i] = temp;
	}
}
