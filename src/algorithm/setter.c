/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erico-ke <erico-ke@42malaga.student.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 16:28:42 by erico-ke          #+#    #+#             */
/*   Updated: 2025/04/01 16:57:12 by erico-ke         ###   ########.fr       */
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
	t_stack			*tmpa;
	t_stack			*tmpb;
	long long int	cont;

	tmpb = lst->b;
	while (tmpb)
	{
		tmpa = lst->a;
		cont = tmpb->content;
		tmpb->obj_node = NULL;
		while (tmpa)
		{
			if ((tmpb->content < tmpa->content && tmpb->content > cont))
				tmpb->obj_node = tmpa;
			cont = tmpa->content;
			tmpa = tmpa->next;
		}
		if (!tmpb->obj_node)
			tmpb->obj_node = ft_search_smallest(lst->a);
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

int	get_big(int first, int second)
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
// puede que varios costes terminen en 0,
// en cuyo caso hay que tomar el primero encontrado al recorrer la lista.
