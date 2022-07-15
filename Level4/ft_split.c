/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledesma <jledesma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 17:51:58 by jledesma          #+#    #+#             */
/*   Updated: 2022/06/15 12:32:08 by jledesma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Assignment name  : ft_split
Expected files   : ft_split.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes a string, splits it into words, and returns them as
a NULL-terminated array of strings.

A "word" is defined as a part of a string delimited either by spaces/tabs/new
lines, or by the start/end of the string.

Your function must be declared as follows:

char    **ft_split(char *str);
 */
#include "stdlib.h"
#include "stdio.h"
# define WD_NUM 1000
# define WD_LEN 1000

char    **ft_split(char *str)
{
	int		i;
	int		i2;
	int		i3;
	char	**tab;

i = 0;
i2 = 0;
tab = (char **)malloc(sizeof(**tab) * 1000);

	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
	i++;
	while (str[i] != '\0')
	{
		if (str[i] > 32)
		{
			i3 = 0;
			tab[i2] = (char*)malloc(sizeof(char) * 1000);
			while (str[i] > 32)
			{
				tab[i2][i3] = str[i];
				i++;
				i3++;
			}
			tab[i2][i3] = '\0';
			i2++;
		}
		else
			i++;
	}
	tab[i2] = 0;
	return (tab);
}

int		main(void)
{
	int i = 0;
	char **tab;
		
	tab = ft_split("Buenas! Vente,-/o- al ashita**");
	while (i < 4)
	{
		printf("string %d : %s\n", i, tab[i]);
		i++;
	}
	return (0);
}