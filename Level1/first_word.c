/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledesma <jledesma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 11:18:16 by jledesma          #+#    #+#             */
/*   Updated: 2022/06/16 11:30:08 by jledesma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Assignment name  : first_word
Expected files   : first_word.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays its first word, followed by a
newline.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or if there are no words, simply display
a newline.

Examples:

$> ./first_word "FOR PONY" | cat -e
FOR$
$> ./first_word "this        ...       is sparta, then again, maybe    not" | cat -e
this$
$> ./first_word "   " | cat -e
$
$> ./first_word "a" "b" | cat -e
$
$> ./first_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$> */

#include "unistd.h"

int main(int argc, char **argv)
{
	int i;
	
	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] == '\t' || argv[1][i] == 32)
		i++;
		while (argv[1][i] != '\0' && argv[1][i] != '\t' && argv[1][i] != 32)
		{
			write(1, &argv[1][i],1);
			i++;
		}
		write(1, "\n", 1);
	} else
	write(1, "\n", 1);	
}