/* Assignment name  : max
Expected files   : max.c
Allowed functions: 
--------------------------------------------------------------------------------

Write the following function:

int		max(int* tab, unsigned int len);

The first parameter is an array of int, the second is the number of elements in
the array.

The function returns the largest number found in the array.

If the array is empty, the function returns 0. */

int	max(int *tab, unsigned int len)
{
	int	i;
	int	temp;

	i = 1;
	while (i < len)
	{
		if (tab[i] < tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = -1;
		}
	i++;
	}
	return (tab[0]);
}

#include "stdio.h"
 void	print_arr(int *tab, unsigned int size)
 {
 	unsigned int i = 0;
 	while (i < size)
	{
 		printf("%d, ", tab[i]);
		++i;
 	}
 	printf("\n");
 }

 int		main(void)
 {
 	int tab[] = { 8, -1, 9, -3, -2, 1, 0, 3, 8, 1, 9 };
 	unsigned int size = sizeof(tab) / sizeof(*tab);
 	print_arr(tab, size);
 	max(tab, size);
 	print_arr(tab, size);
 }