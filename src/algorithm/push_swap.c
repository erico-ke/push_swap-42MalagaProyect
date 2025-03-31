/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erico-ke <erico-ke@42malaga.student.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 15:43:54 by erico-ke          #+#    #+#             */
/*   Updated: 2025/03/31 18:28:52 by erico-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	do_pb(t_push_swap *lst)
{
	while (ft_lst_size(lst->a) > 3)
		pb(lst);
}

void	tiny_sort(t_push_swap *lst)
{
	t_stack	*highest_node;
	t_stack	*tmp;

	tmp = lst->a;
	highest_node = tmp;
	while (tmp)
	{
		if (highest_node->content < tmp->content)
			highest_node = tmp;
		tmp = tmp->next;
	}
	tmp = lst->a;
	if (tmp == highest_node)
		ra(lst);
	else if (tmp->next == highest_node)
		rra(lst);
	tmp = lst->a;
	if (tmp->content > tmp->next->content)
		sa(lst);
}

t_stack	*cheapest(t_stack *stack)
{
	t_stack	*cheapest;
	t_stack	*tmp;

	cheapest = stack;
	tmp = stack;
	while (tmp)
	{
		if (tmp->cost < cheapest->cost)
			cheapest = tmp;
		tmp = tmp->next;
	}
	return (cheapest);
}

void	ft_push_swap(t_push_swap *lst)
{
	t_stack	*cheapest;

	do_pb(lst);
	tiny_sort(lst);
	while (ft_lst_size(lst->b) > 0)
	{
		set_index(lst->b);
		set_index(lst->a);
		set_belowboolean(lst->b);
		set_belowboolean(lst->a);
		set_objetive_node(lst->b),
		set_cost(lst->b);
		cheapest = ft_cheapest(lst->b);
	}
}
