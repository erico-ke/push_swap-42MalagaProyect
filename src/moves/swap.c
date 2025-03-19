/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erico-ke <erico-ke@42malaga.student.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 15:31:14 by erico-ke          #+#    #+#             */
/*   Updated: 2025/03/19 19:03:57 by erico-ke         ###   ########.fr       */
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

t_stack	*sa(t_stack *a)
{
	a = swap(a);
	ft_printf("sa", 1);
	return (a);
}

t_stack	*sb(t_stack *b)
{
	b = swap(b);
	ft_printf("sb", 1);
	return (b);
}

void	ss(t_push_swap	*lst)
{
	lst->a = swap(lst->a);
	lst->b = swap(lst->b);
	ft_printf("ss", 1);
}
