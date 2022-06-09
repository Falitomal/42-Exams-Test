/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledesma <jledesma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 17:56:34 by jledesma          #+#    #+#             */
/*   Updated: 2022/06/04 18:07:11 by jledesma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Assignment name  : ft_list_size
Expected files   : ft_list_size.c, ft_list.h
Allowed functions: 
--------------------------------------------------------------------------------

Write a function that returns the number of elements in the linked list that's
passed to it.

It must be declared as follows:

int	ft_list_size(t_list *begin_list);

You must use the following structure, and turn it in as a file called
ft_list.h:

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;
 */

typedef	struct	s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

int	ft_list_size(t_list *begin_list)
{
	t_list	*swap;
	int		i;

	swap = begin_list;
	i = 0;
	while (swap)
	{
		swap = swap->next;
		i++;
	}
return(i);
}