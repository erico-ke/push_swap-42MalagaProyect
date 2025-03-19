/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_rotate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erico-ke <erico-ke@42malaga.student.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 19:47:46 by erico-ke          #+#    #+#             */
/*   Updated: 2025/03/19 20:24:08 by erico-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	t_stack	*r_rotate(t_stack *stack)
{
	t_stack	*tmp;

	while (stack->next->next != NULL && stack->next != NULL)
		stack = stack->next;
	
}
