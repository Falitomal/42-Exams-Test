/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledesma <jledesma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 19:15:21 by jledesma          #+#    #+#             */
/*   Updated: 2022/06/14 17:02:15 by jledesma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : is_power_of_2
Expected files   : is_power_of_2.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that determines if a given number is a power of 2.

This function returns 1 if the given number is a power of 2, otherwise it returns 0.

Your function must be declared as follows:

int	    is_power_of_2(unsigned int n); */

int	    is_power_of_2(unsigned int n)
{
	unsigned long i;
	
	i = 1;
	while( i < 0xffffffff)
	{
		if (i == n)
			return(1);
		i = i * 2;
	}
	return(0);
}
