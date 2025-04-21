/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erico-ke <erico-ke@42malaga.student.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 18:35:39 by erico-ke          #+#    #+#             */
/*   Updated: 2025/04/21 11:29:45 by erico-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

long long int	ft_atol(char *s)
{
	long long int	n;
	int				sign;
	int				i;

	n = 0;
	sign = 1;
	i = 0;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign = -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		n = n * 10 + (s[i] - '0');
		i++;
	}
	return (n * sign);
}

int	ft_check_util(char **str, int i)
{
	int	j;

	while (str[++i])
	{
		j = -1;
		while (str[i][++j])
		{
			if ((str[i][j] == '-' || str[i][j] == '+')
			&& ft_isdigit(str[i][j + 1]) && !ft_isdigit(str[i][j - 1]))
				j++;
			else if (ft_isdigit(str[i][j]) == 0)
				return (EXIT_FAILURE);
		}
	}
	return (EXIT_SUCCESS);
}
