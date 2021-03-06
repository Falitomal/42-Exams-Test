/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledesma <jledesma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 16:11:22 by jledesma          #+#    #+#             */
/*   Updated: 2022/05/24 20:06:41 by jledesma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Write a program that takes two strings and displays, without doubles, the
characters that appear in either one of the strings.

The display will be in the order characters appear in the command line, and
will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Example:

$>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
zpadintoqefwjy$
$>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6vewg4thras$
$>./union "rien" "cette phrase ne cache rien" | cat -e
rienct phas$
$>./union | cat -e
$
$>
$>./union "rien" | cat -e
$
$> */
#include <unistd.h>

int	check_double(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (0);
			i++;
	}
	return (1);
}

int	check_doublepos(char *str, char c, int pos)
{
	int	i;

	i = 0;
	while (i < pos)
	{	
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 3)
	{
		while (argv[1][i] != '\0')
		{
			if (check_doublepos(argv[1], argv[1][i], i))
				write(1, &argv[1][i], 1);
			i++;
		}	
		i = 0;
		while (argv[2][i] != '\0')
		{
			if (check_double(argv[1], argv[2][i]))
			{
				if (check_doublepos(argv[1], argv[1][i], i))
					write(1, &argv[2][i], 1);
			}
			i++;
		}	
	}
	write(1, "\n", 1);
	return (0);
}
