/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledesma <jledesma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 20:04:49 by jledesma          #+#    #+#             */
/*   Updated: 2022/05/20 14:36:27 by jledesma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Write a program that displays all digits in descending order, followed by a
newline.

Example:
$> ./ft_countdown | cat -e
9876543210$
$>
 */

#include "unistd.h"

int	main(int argc, char **argv)
{
	char	di;

	di = '9';
	while (di >= '0')
	{
		write(1, &di, 1);
		di--;
	}
	write(1, "\n", 1);
	return (0);
}
