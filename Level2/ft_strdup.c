/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledesma <jledesma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 12:43:26 by jledesma          #+#    #+#             */
/*   Updated: 2022/06/01 10:49:49 by jledesma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Reproduce the behavior of the function strdup (man strdup).

Your function must be declared as follows:

char    *ft_strdup(char *src);
 */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
	i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*copy;

	i = 0;
	len = ft_strlen(src);
	copy = (char *)malloc(sizeof(char) * len + 1);
	if (copy == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

int	main(int argc, char **argv)
{
	char	*str;

	str = ft_strdup(argv[1]);
	printf("%s", str);
	return (0);
}
