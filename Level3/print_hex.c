/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledesma <jledesma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 17:28:13 by jledesma          #+#    #+#             */
/*   Updated: 2022/06/01 10:49:36 by jledesma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Assignment name  : print_hex
Expected files   : print_hex.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a positive (or zero) number expressed in base 10,
and displays it in base 16 (lowercase letters) followed by a newline.

If the number of parameters is not 1, the program displays a newline.

Examples:

$> ./print_hex "10" | cat -e
a$
$> ./print_hex "255" | cat -e
ff$
$> ./print_hex "5156454" | cat -e
4eae66$
$> ./print_hex | cat -e
$ */

#include "unistd.h"

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] > 9 && str[i] < 13 || str[i] == 32)
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
			res = (res * 10) + (str[i] - '0');
			i++;
	}
	return (res * sign);
}

void	print_hex(int a)
{
	if (a >= 16)
		print_hex(a / 16);
	ft_putchar("0123456789abcdef"[a % 16]);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		print_hex(ft_atoi(argv[1]));
		write(1, "\n", 1);
	}
}
