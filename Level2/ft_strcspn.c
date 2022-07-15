/*
 * Assignment name	: ft_strcspn
Expected files	: ft_strcspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strcspn
(man strcspn).

The function should be prototyped as follows:

size_t	ft_strcspn(const char *s, const char *reject);
*/
#include "string.h"
#include "stdio.h"

size_t ft_strcspn(const char *s, const char *reject)
{
	int i;
	int i2;

	i = 0;
	while(s[i] != '\0')
	{
		i2 = 0;
		while(reject[i2] != '\0')
		{
			if(s[i] == reject[i2])
				return(i);
			i2++;
		}
		i++;
	}
	return (i);
}
int main()
{
	printf("strcspn %lu\n", strcspn("holas123456", "5"));
	printf("ft_strcspn %zu\n", ft_strcspn("holas123456", "5"));
	printf("strcspn %lu\n", strcspn("hola$$34567891042baguette", "tte"));
	printf("ft_strcspn %zu\n", ft_strcspn("hola$$34567891042baguette", "tte"));
	return (0);
}
