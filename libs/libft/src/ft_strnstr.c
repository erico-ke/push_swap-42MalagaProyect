/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erico-ke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 12:32:40 by erico-ke          #+#    #+#             */
/*   Updated: 2024/09/13 13:22:56 by erico-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	aux;

	i = 0;
	if (little[i] == '\0')
		return ((char *) big);
	while (big[i] && (i < len))
	{
		j = 0;
		aux = i;
		while ((little[j] == big[i]) && (i < len))
		{
			i++;
			j++;
			if (little[j] == '\0')
				return ((char *) &big[i - j]);
		}
		i = aux + 1;
	}
	return (NULL);
}
