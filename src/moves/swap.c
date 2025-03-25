/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erico-ke <erico-ke@42malaga.student.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 15:31:14 by erico-ke          #+#    #+#             */
/*   Updated: 2025/03/25 16:58:36 by erico-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static t_stack	*swap(t_stack *stack)
{
	t_stack	*tmp;

	tmp = stack;
	stack = stack->next;
	tmp->next = stack->next;
	stack->next = tmp;
	return (stack);
}

void	sa(t_push_swap *lst)
{
	lst->a = swap(lst->a);
	ft_printf("sa\n", 1);
}

void	sb(t_push_swap *lst)
{
	lst->b = swap(lst->b);
	ft_printf("sb\n", 1);
}

void	ss(t_push_swap *lst)
{
	lst->a = swap(lst->a);
	lst->b = swap(lst->b);
	ft_printf("ss\n", 1);
}
