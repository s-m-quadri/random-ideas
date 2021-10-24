

#include <stdio.h>
#include "color_cs50/color_cs50.h"
void input_int(int *a);
void print_array(int *array, int count);

int main()
{
	// Taking Input
	int n = get_int_format('r', "Enter the number of elements : ");
	int a[n], b[n];
	for (int i = 0; i < n; i++)
		a[i] = get_int_format('b', "a[%d] = ", i);
	for (int i = 0; i < n; i++)
		b[i] = get_int_format('b', "b[%d] = ", i);

	// Finding Possibility
	int focus = a[0], focus_element = 0, no_of_possibility = 1;
	for (int i = 0; i < n; i++)
		if (a[i] < a[focus_element])
		{
			focus = a[i];
			focus_element = i;
		}
	for (int i = a[focus_element] - b[focus_element]; i > 0; i -= b[focus_element])
	{
		no_of_possibility++;
	}
	printf("\n DONE till check point %d \n", no_of_possibility);

	int possibility[no_of_possibility];
	possibility[0] = a[focus_element];
	printf("\n DONE till check point \n");
	for (int i = 1; i < no_of_possibility; i++)
		possibility[i] = possibility[i - 1] - b[focus_element];
	print_array(possibility, no_of_possibility);

	// // Attemping to Make Equal
	// for (int i = 0; i < n; i++)
	// 	if (a[i] > focus)
	// 		while (a[i] - b[i] < focus)
	// 			a[i] -= b[i];
}

void print_array(int *array, int count)
{
	for (int i = 0; i < count; i++)
	{
		printf("%d ", array[i]);
	}
}

void input_int(int *a)
{
	scanf("%d", a);
}