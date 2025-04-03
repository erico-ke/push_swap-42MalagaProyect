/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erico-ke <erico-ke@42malaga.student.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 15:43:54 by erico-ke          #+#    #+#             */
/*   Updated: 2025/04/03 16:18:38 by erico-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	tiny_sort(t_push_swap *lst)
{
	t_stack	*highest_stack;
	t_stack	*tmp;

	tmp = lst->a;
	highest_stack = tmp;
	while (tmp)
	{
		if (highest_stack->content < tmp->content)
			highest_stack = tmp;
		tmp = tmp->next;
	}
	tmp = lst->a;
	if (tmp == highest_stack)
		ra(lst);
	else if (tmp->next == highest_stack)
		rra(lst);
	tmp = lst->a;
	if (tmp->content > tmp->next->content)
		sa(lst);
}

static t_stack	*ft_cheapest(t_stack *stack)
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

static void	sort_cheapest(t_stack *cheapest, t_push_swap *lst)
{
	if (cheapest->below == true && cheapest->obj_node->below == true)
	{
		while (cheapest != lst->b && cheapest->obj_node != lst->a)
			rrr(lst);
	}
	else if (cheapest->below == false && cheapest->obj_node->below == false)
	{
		while (cheapest != lst->b && cheapest->obj_node != lst->a)
			rr(lst);
	}
	while (cheapest != lst->b)
	{
		if (cheapest->below == true)
			rrb(lst);
		else
			rb(lst);
	}
	while (cheapest->obj_node != lst->a)
	{
		if (cheapest->obj_node->below == true)
			rra(lst);
		else
			ra(lst);
	}
	pa(lst);
}

t_stack	*ft_search_smallest(t_stack *stack)
{
	t_stack	*tmp;
	t_stack	*smallest;

	tmp = stack;
	smallest = stack;
	while (tmp)
	{
		if (smallest->content > tmp->content)
			smallest = tmp;
		tmp = tmp->next;
	}
	return (smallest);
}

void	ft_push_swap(t_push_swap *lst)
{
	t_stack	*cheapest;

	if (ft_issorted(lst->a) == EXIT_FAILURE)
		do_pb(lst);
	tiny_sort(lst);
	while (ft_lst_size(lst->b) > 0)
	{
		set_index(lst->b);
		set_index(lst->a);
		set_belowboolean(lst->b);
		set_belowboolean(lst->a);
		set_obj_node(lst),
		set_cost(lst->b);
		cheapest = ft_cheapest(lst->b);
		sort_cheapest(cheapest, lst);
	}
	cheapest = ft_search_smallest(lst->a);
	while (cheapest != lst->a)
	{
		if (cheapest->below == true)
			rra(lst);
		else
			ra(lst);
	}
}
