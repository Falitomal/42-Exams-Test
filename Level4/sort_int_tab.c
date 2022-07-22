/*
 *
 * Assignment name  : sort_int_tab
Expected files   : sort_int_tab.c
Allowed functions:
--------------------------------------------------------------------------------

Write the following function:

void sort_int_tab(int *tab, unsigned int size);

It must sort (in-place) the 'tab' int array, that contains exactly 'size'
members, in ascending order.

Doubles must be preserved.

Input is always coherent.
*/

void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i;
	int swap;

	i = 0;
	swap = 0;
	if(!tab)
		return;

	while( i < size)
	{
			if(tab[i] > tab[i + 1])
			{
				swap = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = swap;
				i = -1;
			}
		i++;	
	}

}

/* #include "stdio.h"
 void	print_arr(int *tab, unsigned int size)
 {
 	unsigned int i = 0;
 	while (i < size)
	{
 		printf("%d, ", tab[i]);
		++i;
 	}
 	printf("\n");
 } */

/*  int		main(void)
 {
 	int tab[] = { 8, -1, 9, -3, -2, 1, 0, 3, 8, 1, 9 };
 	unsigned int size = sizeof(tab) / sizeof(*tab);
 	print_arr(tab, size);
 	sort_int_tab(tab, size);
 	print_arr(tab, size);
 } */


