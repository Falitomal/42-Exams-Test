/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledesma <jledesma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 19:02:06 by jledesma          #+#    #+#             */
/*   Updated: 2022/06/15 20:21:50 by jledesma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Assignment name  : wdmatch
Expected files   : wdmatch.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and checks whether it's possible to
write the first string with characters from the second string, while respecting
the order in which these characters appear in the second string.

If it's possible, the program displays the string, followed by a \n, otherwise
it simply displays a \n.

If the number of arguments is not 2, the program displays a \n.

Examples:

$>./wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e
faya$
$>./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e
$
$>./wdmatch "quarante deux" "qfqfsudf arzgsayns tsregfdgs sjytdekuoixq " | cat -e
quarante deux$
$>./wdmatch "error" rrerrrfiiljdfxjyuifrrvcoojh | cat -e
$
$>./wdmatch | cat -e
$
 */
#include "unistd.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int i;
	int i2;
	int found;

	i = 0;
	i2 = 0;
	found = 0;

	if (argc == 3)
	{
		while (argv[1][i] != '\0')
		{
			while (argv[2][i2] != '\0')
			{
				if (argv[1][i] == argv[2][i2])
				{
					found++;
					break;
				}
				i2++;
			}
			i++;
		}
		if (found == ft_strlen(argv[1]))
			ft_putstr(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}