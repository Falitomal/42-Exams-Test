/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledesma <jledesma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 14:40:47 by jledesma          #+#    #+#             */
/*   Updated: 2022/05/25 14:53:09 by jledesma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Reproduce the behavior of the function strcmp (man strcmp).

Your function must be declared as follows:
int    ft_strcmp(char *s1, char *s2);
 */
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[2])
		i++;
	return (s1[i] - s2[i]);
}
