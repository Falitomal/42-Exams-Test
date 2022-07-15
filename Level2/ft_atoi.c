/*
Assignment name  : ft_atoi
Expected files   : ft_atoi.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str to an integer (type int)
and returns it.

It works much like the standard atoi(const char *str) function, see the man.

Your function must be declared as follows:

int	ft_atoi(const char *str);
*/
#include "unistd.h"
#include "stdlib.h"
#include "stdio.h"

int ft_atoi(const char *str)
{
	int i;
	int res;
	int sign;

	i = 0;
	res = 0;
	sign = 1;

	while(str[i] <= 32)
		i++;
	if(str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if(str[i] == '+')
		i++;
	while(str[i] >= '0' && str[i] <= '9')
	{
		res *= 10;
		res += str[i] - '0';
	   	i++;	
	}
	return (res * sign);
}

int main(int argc, char **argv)
{
	if(argc > 1)
	{
		printf("Atoi: %d\n", atoi(argv[1]));
		printf("ft_atoi: %d" , ft_atoi(argv[1]));
	}
	return (0);
}
