/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledesma <jledesma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 19:51:36 by jledesma          #+#    #+#             */
/*   Updated: 2022/06/14 17:44:02 by jledesma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Assignment name  : str_capitalizer
Expected files   : str_capitalizer.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes one or several strings and, for each argument,
capitalizes the first character of each word (If it's a letter, obviously),
puts the rest in lowercase, and displays the result on the standard output,
followed by a \n.

A "word" is defined as a part of a string delimited either by spaces/tabs, or
by the start/end of the string. If a word only has one letter, it must be
capitalized.

If there are no arguments, the progam must display \n.

Example:

$> ./str_capitalizer | cat -e
$
$> ./str_capitalizer "Premier PETIT TesT" | cat -e
Premier Petit Test$
$> ./str_capitalizer "DeuxiEmE tEST uN PEU moinS  facile" "   attention C'EST pas dur QUAND mEmE" "ALLer UN DeRNier 0123456789pour LA rouTE    E " | cat
	-e
Deuxieme Test Un Peu Moins  Facile$
   Attention C'est Pas Dur Quand Meme$
Aller Un Dernier 0123456789pour La Route    E $
$> */

#include "unistd.h"
int	main(int argc, char **argv)
{
	int   i;
	int   c;

	c = 1;
	if (argc > 1)
	{ 
		while (c < argc)
		{
			i = 0;
			printf("\n%d\n",c);
			while (argv[c][i] != '\0')
			{

				if (argv[c][i] >= 'A' && argv[c][i] <= 'Z')
					argv[c][i] = argv[c][i] + 32;
				if ((argv[c][i] >= 'a' && argv[c][i] <= 'z') &&
               (argv[c][i - 1] == ' ' || argv[c][i - 1] == '\t'))
					argv[c][i] = argv[c][i] - 32;
				if (argv[c][0] >= 'a' && argv[c][0] <= 'z')
					argv[c][i] = argv[c][i] - 32;
				write(1, &argv[c][i], 1);
				i++;
			}
			write(1, "\n", 1);
			c++;
		}
	}
	else
		write(1, "\n", 1);
   return (0);
}