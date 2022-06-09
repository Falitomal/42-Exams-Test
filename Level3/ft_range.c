/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledesma <jledesma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 13:26:49 by jledesma          #+#    #+#             */
/*   Updated: 2022/06/07 13:08:49 by jledesma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Assignment name  : ft_range
Expected files   : ft_range.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write the following function:

int     *ft_range(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at start and end at end (Including start and end !), then
return a pointer to the first value of the array.

Examples:

- With (1, 3) you will return an array containing 1, 2 and 3.
- With (-1, 2) you will return an array containing -1, 0, 1 and 2.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing 0, -1, -2 and -3.
 */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int ft_abs(int i)
{
	if(i < 0)
	{
		return (-i);
	}
	return (i);
}

int		*ft_range(int start, int end)
{
	int i;
	int *tab;

	i = 0;
	tab = (int*)malloc(sizeof(int) * (ft_abs(start - end) + 1));
	while (start < end)
	{
		tab[i] = start;
		start++;
		i++;
	}
	tab[i] = start;
	while (end < start)
	{
		tab[i] = start;
		start--;
		i++;
	}
	tab[i] = start;
	return (tab);
}
int		main()
{
	int start = -1;
	int end = 22;

	int *array;

	array = ft_range(start, end);
	int i = 0;
	while(array[i] != end)
	{
		printf("%d", array[i]);
		i++;
	}
}