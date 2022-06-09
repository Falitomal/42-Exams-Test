/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledesma <jledesma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 19:13:04 by jledesma          #+#    #+#             */
/*   Updated: 2022/06/08 19:35:19 by jledesma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Assignment name  : ft_itoa
Expected files   : ft_itoa.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes an int and converts it to a null-terminated string.
The function returns the result in a char array that you must allocate.

Your function must be declared as follows: */

char	*ft_itoa(int nbr); 
*/

static int ft_negative(int n)
{
	if(n < 0)
		n = -n;
	return (n);
}
static size_t	ft_number_len(int n)
{
	size_t i;
	
	i = 0;
	if (n <= 0)
		i++;
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);	
}

char *ft_itoa(int nbr)
{
	char *res;
	size_t pos;
	size_t len;
	
	len = ft_number_len(n);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if(res == NULL)
		return (NULL);
	if (nbr == -2147483648)
		return ("-2147483648\0");
	if (nbr < 0)
	{
	nbr = -nbr;
	}
	
}
