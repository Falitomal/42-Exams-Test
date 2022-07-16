/*
 * Assignment name  : add_prime_sum
Expected files   : add_prime_sum.c
Allowed functions: write, exit
--------------------------------------------------------------------------------

Write a program that takes a positive integer as argument and displays the sum
of all prime numbers inferior or equal to it followed by a newline.

If the number of arguments is not 1, or the argument is not a positive number,
just display 0 followed by a newline.

Yes, the examples are right.

Examples:

$>./add_prime_sum 5
10
$>./add_prime_sum 7 | cat -e
17$
$>./add_prime_sum | cat -e
0$
$>
*/
#include "unistd.h"

int is_prime(int nb)
{
	int i;
	i = 2;
	while( i < nb)
	{
		if( nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int ft_atoi(char *str)
{
	int i;
	int res;
	
	i = 0;
	res = 0;
	while(str[i] != '\0')
	{
		if(str[i] >= '0' && str[i] <= '9')
		{
			res *= 10;
		  	res	+= str[i] - '0';
		}
		i++;
	}
	return (res);
}

void  ft_putnbr(int nb)
{
	if(nb > 9)
		ft_putnbr( nb / 10);
	write(1, &"0123456789"[nb % 10],1);
}

int  prime_sum(int nb)
{
	int i;
	int res;

	i = 2;
	res = 0;
	while(i <= nb)
	{
		if(is_prime(i) == 1)
			res += i;
		i++;
	}
	return (res);
}


int main(int argc, char **argv)
{
	if(argc == 2)
	{
		ft_putnbr(prime_sum(ft_atoi(argv[1])));
	}
	else
		ft_putnbr(0);	
	write(1, "\n",1);
	return (0);
}
