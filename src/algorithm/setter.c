/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erico-ke <erico-ke@42malaga.student.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 16:28:42 by erico-ke          #+#    #+#             */
/*   Updated: 2025/03/24 18:25:42 by erico-ke         ###   ########.fr       */
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

void	set_objetive_node(t_push_swap *lst)
{
	t_stack			*tmpa;
	t_stack			*tmpb;
	long long int	cont;

	tmpb = lst->b;
	while (tmpb)
	{
		tmpa = lst->a;
		cont = tmpa->content;
		while (tmpa)
		{
			if ((tmpb->content < tmpa->content && tmpb->content > cont)
			|| tmpa->next == NULL)
			{
				tmpb->objetive_node = tmpa;
				break ;
			}
			cont = tmpa->content;
			tmpa = tmpa->next;
		}
		tmpb = tmpb->next;
	}
}//checkear que funcione bien esto
