/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledesma <jledesma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 19:49:20 by jledesma          #+#    #+#             */
/*   Updated: 2022/05/17 20:04:01 by jledesma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Write a program that takes strings as arguments, and displays its last
argument followed by a newline.

If the number of arguments is less than 1, the program displays a newline.

Examples:

$> ./aff_last_param "zaz" "mange" "des" "chats" | cat -e
chats$
$> ./aff_last_param "j'aime le savon" | cat -e
j'aime le savon$
$> ./aff_last_param
$ */
#include "unistd.h"

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc > 1)
	{	
		argc--;
		while (argv[argc][i] != '\0')
		{
			write(1, &argv[argc][i], 1);
			i++;
		}
	}
}

