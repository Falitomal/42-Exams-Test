/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledesma <jledesma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 17:35:53 by jledesma          #+#    #+#             */
/*   Updated: 2022/06/03 17:42:03 by jledesma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Assignment name  : reverse_bits
Expected files   : reverse_bits.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that takes a byte, reverses it, bit by bit (like the
example) and returns the result.

Your function must be declared as follows:

unsigned char	reverse_bits(unsigned char octet);

Example:

  1 byte
_____________
 0010  0110
	 ||
	 \/
 0110  0100
 */

unsigned char	reverse_bits(unsigned char octet)
{
	int i;
	int res;
	
	i = 0;
	res = 0;
	while( i < 8)
	{
	res = res + octet % 2 * (2 poten(7-i));
	
	}

}