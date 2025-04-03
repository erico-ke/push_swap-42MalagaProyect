/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erico-ke <erico-ke@42malaga.student.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 16:28:42 by erico-ke          #+#    #+#             */
/*   Updated: 2025/04/03 15:21:50 by erico-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	set_index(t_stack *lst)
{
	t_stack	*aux;
	int		i;

	aux = lst;
	i = 0;
	while (aux)
	{
		aux->index = i;
		i++;
		aux = aux->next;
	}
}

void	set_obj_node(t_push_swap *lst)
{
	t_stack	*tmpa;
	t_stack	*tmpb;
	t_stack	*best_match;

	tmpb = lst->b;
	while (tmpb)
	{
		tmpa = lst->a;
		best_match = NULL;
		while (tmpa)
		{
			if (tmpa->content > tmpb->content)
			{
				if (!best_match || tmpa->content < best_match->content)
					best_match = tmpa;
			}
			tmpa = tmpa->next;
		}
		if (!best_match)
			best_match = ft_search_smallest(lst->a);
		tmpb->obj_node = best_match;
		tmpb = tmpb->next;
	}
}

void	set_belowboolean(t_stack *stack)
{
	int		stack_size;
	t_stack	*tmp;

	stack_size = (ft_lst_size(stack) / 2);
	tmp = stack;
	while (tmp)
	{
		if (tmp->index < stack_size)
			tmp->below = false;
		else
			tmp->below = true;
		tmp = tmp->next;
	}
}

static int	get_big(int first, int second)
{
	if (first > second)
		return (first);
	else
		return (second);
}

void	set_cost(t_stack *stack)
{
	t_stack	*tmp;

	tmp = stack;
	while (tmp)
	{
		if (tmp->below == false && tmp->obj_node->below == false)
			tmp->cost = get_big(tmp->index, tmp->obj_node->index);
		else if (tmp->below == true && tmp->obj_node->below == true)
			tmp->cost = get_big(ft_lst_size(tmp), ft_lst_size(tmp->obj_node));
		else if (tmp->below == false && tmp->obj_node->below == true)
			tmp->cost = tmp->index + ft_lst_size(tmp->obj_node);
		else
			tmp->cost = ft_lst_size(tmp) + tmp->obj_node->index;
		tmp = tmp->next;
	}
}
