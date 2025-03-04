/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erico-ke <erico-ke@42malaga.student.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:35:35 by erico-ke          #+#    #+#             */
/*   Updated: 2024/10/03 15:23:51 by erico-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*uchar_s;

	uchar_s = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (uchar_s[i] == (unsigned char)c)
			return ((void *)(uchar_s + i));
		i++;
	}
	return (NULL);
}
