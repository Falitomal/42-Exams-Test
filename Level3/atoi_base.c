/*
 * Assignment name  : ft_atoi_base
Expected files   : ft_atoi_base.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str (base N <= 16)
to an integer (base 10) and returns it.

The characters recognized in the input are: 0123456789abcdef
Those are, of course, to be trimmed according to the requested base. For
example, base 4 recognizes "0123" and base 16 recognizes "0123456789abcdef".

Uppercase letters must also be recognized: "12fdb3" is the same as "12FDB3".

Minus signs ('-') are interpreted only if they are the first character of the
string.

Your function must be declared as follows:

int	ft_atoi_base(const char *str, int str_base);
*/

int ft_atoi_base(const char *str, int str_base)
{
	int i;
	int res;
	int sign;

	i = 0;
	res = 0;
	sign = 1;

	if(str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while(str[i] != '\0')
	{
		res *=str_base;
		if(str[i] >= '0' && str[i] <= '9')
			res += str[i] - 48;
		else if(str[i] >= 'A' && str[i] <= 'Z')
			res += str[i] - 55;
		else if(str[i] >= 'a' && str[i] <= 'z')
			res += str[i] - 87;
		i++;
	}
	return (res * sign);
}
// Se pone 55 para que sea del 10 en adelante la A, y 87 porque su valor es 97 asi consiguiendo que sea 10 también
// si se pone 1111 en base 2 seria 15 y si se pone 000b en 16 seria 11
#include "stdio.h"
int main()
{
	printf("000b en base 16 debe dar 11:\n");
	printf("%d\n", ft_atoi_base("000b",16));

	printf("1011 en base 2 debe dar 11:\n");
	printf("%d\n", ft_atoi_base("1011",2));
}
