/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erico-ke <erico-ke@42malaga.student.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 19:29:23 by erico-ke          #+#    #+#             */
/*   Updated: 2025/03/25 16:58:26 by erico-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static t_stack	*rotate(t_stack *stack)
{
	t_stack	*tmp;
	t_stack	*aux;

	tmp = stack;
	aux = stack->next;
	while (stack->next != NULL)
		stack = stack->next;
	tmp->next = NULL;
	stack->next = tmp;
	return (aux);
}

void	ra(t_push_swap *lst)
{
	lst->a = rotate(lst->a);
	ft_printf("ra\n", 1);
}

void	rb(t_push_swap *lst)
{
	lst->b = rotate(lst->b);
	ft_printf("rb\n", 1);
}

void	rr(t_push_swap *lst)
{
	lst->a = rotate(lst->a);
	lst->b = rotate(lst->b);
	ft_printf("rr\n", 1);
}
