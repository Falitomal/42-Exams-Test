/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledesma <jledesma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 19:43:49 by jledesma          #+#    #+#             */
/*   Updated: 2022/06/04 15:45:57 by jledesma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
Write a function that takes a byte, and prints it in binary WITHOUT A NEWLINE
AT THE END.

Your function must be declared as follows:

void	print_bits(unsigned char octet);

Example, if you pass 2 to print_bits, it will print "00000010" */

#include <unistd.h>
void	print_bits(unsigned char octet)
{
	int i;
	//el numero maximo es 128 en bits
	i = 128;
	while (i > 0)
	{
		if (octet >= i)
		{
			write(1, "1", 1);
			octet = octet % i;
			i = i / 2;
		}
		else
		{
			write(1, "0", 1);
			i = i / 2;
		}
	}
}

int main()
{
	int i;
	i = 2;
	print_bits(i);
	write(1, "\n", 1);
	return (0);
}