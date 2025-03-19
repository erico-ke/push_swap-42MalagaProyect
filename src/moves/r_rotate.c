/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_rotate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erico-ke <erico-ke@42malaga.student.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 19:47:46 by erico-ke          #+#    #+#             */
/*   Updated: 2025/03/19 20:58:03 by erico-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_stack	*r_rotate(t_stack *stack)
{
	t_stack	*tmp;

	tmp = stack;
	while (stack->next->next != NULL)
		stack = stack->next;
	stack->next->next = tmp;
	tmp = stack->next->next;
	stack->next = NULL;
	return (tmp);
}

void	rra(t_push_swap *lst)
{
	lst->a = r_rotate(lst->a);
	ft_printf("rra\n", 1);
}

void	rrb(t_push_swap *lst)
{
	lst->b = r_rotate(lst->b);
	ft_printf("rrb\n", 1);
}

void	rrr(t_push_swap *lst)
{
	lst->a = r_rotate(lst->a);
	lst->b = r_rotate(lst->b);
	ft_printf("rrr\n", 1);
}
