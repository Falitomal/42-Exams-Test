/* Expected files  : ft_strpbrk.c
Expected files  : ft_strpbrk.c
Allowed functions: None
---------------------------------------------------------------
Reproduce exactly the behavior of the function strpbrk
(man strpbrk).
The function should be prototyped as follows:
char    *ft_strpbrk(const char *s1, const char *s2);
DESCRIPTION
     The strpbrk() function locates in the null-terminated string s the first occurrence of any character in the string charset and returns a
     pointer to this character.  If no characters from charset occur anywhere in s strpbrk() returns NULL.
*/
/* 
int ft_search(const char *srt, const char c)
{

}
char *ft_strpbrk(const char *s1, const char *s2)
{
} */

int		find_char(const char c, const char *str)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		++str;
	}
	return (0);
}

char	*ft_strpbrk(const char *s1, const char *s2)
{
	while (*s1)
	{
		if (find_char(*s1, s2) == 1)
			return ((char *)s1);
		++s1;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int		main(void)
{
	printf("ft: %s; real: %s\n", \
		ft_strpbrk("This is a string to searchR in", "R"), \
		strpbrk("This is a string to searchR in", "R")
		);

	printf("ft: %s; real: %s\n", \
		ft_strpbrk("This is a stringX! to search inX1", "X1"), \
		strpbrk("This is a stringX! to search inX1", "X1")
		);
}