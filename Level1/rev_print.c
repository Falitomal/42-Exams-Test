/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledesma <jledesma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 16:40:22 by jledesma          #+#    #+#             */
/*   Updated: 2022/06/09 20:00:53 by jledesma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*Assignment name  : rev_print
Expected files   : rev_print.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string, and displays the string in reverse
followed by a newline.

If the number of parameters is not 1, the program displays a newline.

Examples:

$> ./rev_print "zaz" | cat -e
zaz$
$> ./rev_print "dub0 a POIL" | cat -e
LIOP a 0bud$
$> ./rev_print | cat -e
$ 
*/

#include "unistd.h"
#include "stdio.h"

int main(int argc, char **argv)
{
	char *str;
	int len;
	int i;
	
	i = 0;
	len = 0;
	
	str = argv[1];
	if (argc == 2)
	{
		//printf("%s\n", str);
		while (str[len] != '\0')
		{
			len++;
		}
			len++;
		while (i < len)
		{
			write(1, &str[len], 1);
			len--;
			i++;
		}
			write(1, "\0", 1);
	}
	write(1, "\n", 1);
}
