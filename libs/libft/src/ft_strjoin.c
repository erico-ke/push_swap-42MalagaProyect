/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erico-ke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 20:22:09 by erico-ke          #+#    #+#             */
/*   Updated: 2024/09/20 20:22:11 by erico-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	size_t	size;

	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	ret = (char *) malloc(size);
	if (!ret)
		return (NULL);
	ft_strlcpy(ret, s1, size);
	ft_strlcat(ret, s2, size);
	return (ret);
}
