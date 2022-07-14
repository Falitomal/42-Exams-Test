/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledesma <jledesma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 13:15:12 by jledesma          #+#    #+#             */
/*   Updated: 2022/06/22 13:54:52 by jledesma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
Write a function that takes a byte, and prints it in binary WITHOUT A NEWLINE
AT THE END.

Your function must be declared as follows:

void	print_bits(unsigned char octet);

Example, if you pass 2 to print_bits, it will print "00000010" */

/* Manejando bits la mejor opcion */

#include <unistd.h>
	/*Hay 8 posiciones contando el 0 por lo tanto pos = 7
	La mask es por el valor, y se recorre con >> se dice que si en esa pos la mask es correcta
	*/

void	print_bits(unsigned char octet)
{
	int				pos;
	unsigned char	mask;
	char			res;

	pos = 7;
	mask = 1;
	while (pos >= 0)
	{
		res = ((octet >> pos) & mask) + '0';
		write(1, &res, 1);
		--pos;
	}
}

int main()
{
	print_bits(22);
	write(1, "\n",1);
}