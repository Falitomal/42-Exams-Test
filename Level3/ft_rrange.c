/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledesma <jledesma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 13:10:22 by jledesma          #+#    #+#             */
/*   Updated: 2022/06/15 20:25:46 by jledesma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Assignment name  : ft_rrange
Expected files   : ft_rrange.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write the following function:

int     *ft_rrange(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at end and end at start (Including start and end !), then
return a pointer to the first value of the array.

Examples:

- With (1, 3) you will return an array containing 3, 2 and 1
- With (-1, 2) you will return an array containing 2, 1, 0 and -1.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing -3, -2, -1 and 0.
///////////////////////////////////////////////////
 */

#include <stdio.h>
#include <stdlib.h>

int ft_abs(i)
{
	if( i < 0)
		return (-i);
	return (i);
}
int		*ft_rrange(int start, int end)
{
	int i;
	int *tab;
	
	i = 0;
	tab = (int *)malloc(sizeof(int) * (ft_abs(start - end) + 1));
	while (end > start)
	{
		tab[i] = end;
		end--;
		i++;
	}
	tab[i] = end;
	while (end < start)
	{
		tab[i] = end;
		end++;
		i++;
	}
	tab[i] = end;
		return(tab);
}

int		main()
{
	int start = -1;
	int end = 22;

	int *array;

	array = ft_rrange(start, end);
	int i = 0;
	while(array[i] != start)
	{
		printf("%d, ", array[i]);
		i++;
	}
}