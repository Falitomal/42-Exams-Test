/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledesma <jledesma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 18:28:02 by jledesma          #+#    #+#             */
/*   Updated: 2022/06/04 13:51:48 by jledesma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Write a function that reverses (in-place) a string.

It must return its parameter.

Your function must be declared as follows:

char    *ft_strrev(char *str);
 */
#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int		i;
	char	temp;
	int		len;

	i = 0;
	len = ft_strlen(str) - 1;
	while (len > i)
	{
		temp = str[i];
		str[i] = str[len];
		str[len] = temp;
		len--;
		i++;
	}
	return (str);
}

int main( int argc, char **argv)
{
	char *str;

	str = ft_strrev(argv[1]);
	printf("%s", str);
}
