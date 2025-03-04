/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erico-ke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 11:38:53 by erico-ke          #+#    #+#             */
/*   Updated: 2024/09/13 18:17:47 by erico-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*c_dest;
	unsigned char	*c_src;

	i = -1;
	c_dest = (unsigned char *) dest;
	c_src = (unsigned char *) src;
	if (!c_dest && !c_src)
		return (NULL);
	if (c_dest <= c_src)
	{
		while (++i < n)
			c_dest[i] = c_src[i];
	}
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			c_dest[i] = c_src[i];
		}
	}
	return (dest);
}
