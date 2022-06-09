/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledesma <jledesma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 17:47:27 by jledesma          #+#    #+#             */
/*   Updated: 2022/05/17 19:48:34 by jledesma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
Write a program that takes strings as arguments, and displays its first
argument followed by a \n.

If the number of arguments is less than 1, the program displays \n.

Example:

$> ./aff_first_param vincent mit "l'ane" dans un pre et "s'en" vint | cat -e
vincent$
$> ./aff_first_param "j'aime le fromage de chevre" | cat -e
j'aime le fromage de chevre$
$> ./aff_first_param
$ 
*/

#include <unistd.h>

int main(int argc, char **argv)
{
	int	i;

	i = -1;
	while (argv[1][++i])
		write(1, &argv[1][i],1);
	write(1, "\n",1);
	return (0);
}
