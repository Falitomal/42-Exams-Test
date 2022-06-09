/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledesma <jledesma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 18:08:02 by jledesma          #+#    #+#             */
/*   Updated: 2022/06/04 18:08:05 by jledesma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void count_zeros (int n, int *i)
{
	if (n >= 2)
		count_zeros(n / 2, i);
	(*i)--; // ++
}

void ft_putnbr (int n)
{
	char c;

	if (n >= 2)
		ft_putnbr(n / 2);
	c = (n % 2) + '0';
	write (1, &c, 1);
}

int main (void)
{
/*	int i;

	i = 8; // = 0
	count_zeros(0, &i);
	// i = 3 i = 5
	while (i > 0)
	{
		write(1, "0", 1);
		i--;
	}*/
	//ft_putnbr (0);
	int num = 3;
	int index = 7;
	while (index >= 0)
	{
		if ((num >> index & 1) == 1)
		{
			write(1,"1", 1);
		} else {
			write(1,"0", 1);
		}
		
		index--;
	}
	
}