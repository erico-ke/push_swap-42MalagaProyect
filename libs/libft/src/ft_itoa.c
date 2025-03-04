/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erico-ke <erico-ke@42malaga.student.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:51:47 by erico-ke          #+#    #+#             */
/*   Updated: 2024/10/03 15:23:17 by erico-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*stringreverser(char *s)
{
	int		i;
	size_t	j;
	char	aux;

	i = (ft_strlen(s) - 1);
	j = 0;
	if (s[j] == '-')
		j++;
	while (j < (ft_strlen(s) / 2))
	{
		aux = s[j];
		s[j] = s[i];
		s[i] = aux;
		j++;
		i--;
	}
	if ((ft_strlen(s) % 2) == 1)
	{
		aux = s[j];
		s[j] = s[i];
		s[i] = aux;
	}
	return (s);
}

static int	dicounter(long n)
{
	int	res;

	res = 0;
	if (n < 0)
	{
		res++;
		n = -n;
	}
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		res++;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*res;
	long	num;

	i = 0;
	num = n;
	res = (char *) malloc(dicounter(num) + 1);
	if (!res)
		return (NULL);
	if (num < 0)
	{
		res[i] = '-';
		num = -num;
		i++;
	}
	while (num >= 0)
	{
		res[i++] = ((num % 10) + 48);
		num = num / 10;
		if (num == 0)
			break ;
	}
	res[i] = '\0';
	res = stringreverser(res);
	return (res);
}
