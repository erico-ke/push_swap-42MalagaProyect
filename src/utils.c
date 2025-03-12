/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erico-ke <erico-ke@42malaga.student.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 18:35:39 by erico-ke          #+#    #+#             */
/*   Updated: 2025/03/12 18:37:41 by erico-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atol(char *nptr)
{
	long	i;
	long	res;
	long	neg;

	i = 0;
	res = 0;
	neg = 1;
	while (nptr[i] == (' ') || nptr[i] == ('\f') || nptr[i] == ('\n')
		|| nptr[i] == ('\r') || nptr[i] == ('\t') || nptr[i] == ('\v'))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			neg = (-neg);
		i++;
	}
	while (nptr[i])
	{
		if (ft_isdigit(nptr[i]))
			res = (res * 10) + (nptr[i] - 48);
		else
			break ;
		i++;
	}
	return (res * neg);
}
