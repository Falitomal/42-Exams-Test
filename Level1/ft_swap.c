/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledesma <jledesma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 18:46:54 by jledesma          #+#    #+#             */
/*   Updated: 2022/05/20 19:06:32 by jledesma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_swapAssignment name  : ft_swap
Expected files   : ft_swap.c
Allowed functions: 
--------------------------------------------------------------------------------

Write a function that swaps the contents of two integers the adresses of which
are passed as parameters.

Your function must be declared as follows:

void	ft_swap(int *a, int *b);
*/

void	ft_swap(int *a, int *b)
{
	int	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
