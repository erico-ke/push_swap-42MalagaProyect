/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erico-ke <erico-ke@42malaga.student.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 18:18:08 by erico-ke          #+#    #+#             */
/*   Updated: 2024/10/02 20:06:07 by erico-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	res;
	int	neg;

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
