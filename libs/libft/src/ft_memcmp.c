/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erico-ke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 20:12:14 by erico-ke          #+#    #+#             */
/*   Updated: 2024/09/12 20:32:22 by erico-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*uchar_s1;
	unsigned char	*uchar_s2;

	if (n == 0)
		return (0);
	uchar_s1 = (unsigned char *) s1;
	uchar_s2 = (unsigned char *) s2;
	i = 0;
	while (i < n && uchar_s1[i] == uchar_s2[i])
		i++;
	if (i == n)
		return (0);
	return (uchar_s1[i] - uchar_s2[i]);
}
