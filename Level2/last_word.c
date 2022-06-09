/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledesma <jledesma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 19:38:48 by jledesma          #+#    #+#             */
/*   Updated: 2022/06/04 13:39:50 by jledesma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Expected files   : last_word.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays its last word followed by a \n.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or there are no words, display a newline.

Example:

$> ./last_word "FOR PONY" | cat -e
PONY$
$> ./last_word "this        ...       is sparta, then again, maybe    not" | cat -e
not$
$> ./last_word "   " | cat -e
$
$> ./last_word "a" "b" | cat -e
$
$> ./last_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>
 */

#include "unistd.h"

int	main(int argc, char **argv)
{
	int		i;
	char	*lastw;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] <= 32 && argv[1][i + 1] > 32)
				lastw = &argv[1][i + 1];
			i++;
		}
		i = 0;
		while (lastw && lastw[i] > 32)
		{
			write(1, &lastw[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
