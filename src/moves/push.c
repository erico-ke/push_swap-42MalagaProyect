/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erico-ke <erico-ke@42malaga.student.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 18:54:45 by erico-ke          #+#    #+#             */
/*   Updated: 2025/03/19 19:41:06 by erico-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(t_push_swap	*lst)
{
	t_stack	*tmp;
	
	tmp = lst->a->next;
	lst->a->next = lst->b;
	lst->b = lst->a;
	lst->a = tmp;
	ft_printf("pb\n", 1);
}

void	pa(t_push_swap	*lst)
{
	t_stack	*tmp;
	
	tmp = lst->b->next;
	lst->b->next = lst->a;
	lst->a = lst->b;
	lst->b = tmp;
	ft_printf("pa\n", 1);
}
