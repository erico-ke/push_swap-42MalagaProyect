/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erico-ke <erico-ke@42malaga.student.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 15:43:54 by erico-ke          #+#    #+#             */
/*   Updated: 2025/03/25 16:00:31 by erico-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_push_swap(t_push_swap *lst)
{
	pb(lst);
	pb(lst);
	set_index(lst->a);
	set_index(lst->b);
	set_objetive_node(lst);
	int i = 0;
	while (lst->b)
	{
		printf("iteracion %d:\nobjetive node index:%d\n", i, lst->b->objetive_node->index);
		printf("actual node in stack b content:%lld\n\n", lst->b->content);
		lst->b = lst->b->next;
		i++;
	}
}
