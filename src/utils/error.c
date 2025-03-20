/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erico-ke <erico-ke@42malaga.student.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 18:10:04 by erico-ke          #+#    #+#             */
/*   Updated: 2025/03/20 18:35:35 by erico-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	print_error(void)
{
	ft_printf("%s\n", 2, "Error");
	return (EXIT_FAILURE);
}

void	ft_freemen(t_push_swap *lst)
{
	t_stack	*tmp;

	while (lst->a)
	{
		tmp = lst->a;
		lst->a = lst->a->next;
		free(tmp);	
	}
	while (lst->b)
	{
		tmp = lst->b;
		lst->b = lst->b->next;
		free(tmp);	
	}
	free(lst);
}
