/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledesma <jledesma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 12:30:25 by jledesma          #+#    #+#             */
/*   Updated: 2022/05/27 16:59:35 by jledesma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Write a program that takes three strings:
Assignment name  : do_op
Expected files   : *.c, *.h
Allowed functions: atoi, printf, write
--------------------------------------------------------------------------------

- The first and the third one are representations of base-10 signed integers
  that fit in an int.
- The second one is an arithmetic operator chosen from: + - * / %

The program must display the result of the requested arithmetic operation,
followed by a newline. If the number of parameters is not 3, the program
just displays a newline.

You can assume the string have no mistakes or extraneous characters. Negative
numbers, in input or output, will have one and only one leading '-'. The
result of the operation fits in an int.

Examples:

$> ./do_op "123" "*" 456 | cat -e
56088$
$> ./do_op "9828" "/" 234 | cat -e
42$
$> ./do_op "1" "+" "-43" | cat -e
-42$
$> ./do_op | cat -e
$
 */

#include "stdio.h"
#include "stdlib.h"
#include "unistd.h"

int	main(int argc, char **argv)
{
	int		val;
	int		a;
	int		b;
	char	opt;

	val = 0;
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	opt = argv[2][0];
	if (argc == 4)
	{
		if (opt == '+')
		val = a + b;
		else if (opt == '-')
		val = a - b;
		else if (opt == '/')
		val = a / b;
		else if (opt == '%')
		val = a % b;
		else if (opt == '*')
		val = a * b;
		printf("%d\n", val);
	}
	else
		write(1, "\n", 1);
	return (0);
}
