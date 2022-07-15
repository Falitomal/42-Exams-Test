/*
 *

Assignment name	: ft_strspn
Expected files	: ft_strspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the strspn function
(man strspn).

The function should be prototyped as follows:

size_t	ft_strspn(const char *s, const char *accept);
*/
#include "stdio.h"
#include "string.h"

size_t	ft_strspn(const char *s, const char *accept)
{
	int	i;
	int	cont;

	i = 0;
	cont = 0;
	while (s[i] != '\0')
	{
		while (*accept != '\0')
		{
			if ((accept[i] == s[i]))
				cont++;
			accept++;
		}
		i++;
	}
	return (cont);
}

int	main(void)
{
	char	*a;
	char	*b;
	char	*c;
	char	haystack[];
	char	accept[];

	a = "1234567";
	b = "6";
	c = "12345";
	haystack[] = "This is a test string";
	accept[] = "tgaThis";
	printf("%zu\n", ft_strspn(haystack, accept));
	printf("%zu\n", ft_strspn(haystack, accept));
	printf("strspn:%zu\n", strspn(a, b));
	printf("ft_strspn:%zu\n", ft_strspn(a, b));
	printf("strspn:%zu\n", strspn(a, c));
	printf("ft_strspn:%zu\n", ft_strspn(a, c));
	printf("strspn:%zu\n", strspn(c, a));
	printf("ft_strspn:%zu\n", ft_strspn(c, a));
	return (0);
}
