/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erico-ke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 11:53:57 by erico-ke          #+#    #+#             */
/*   Updated: 2024/09/18 11:53:59 by erico-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*res;

	res = malloc(ft_strlen(s) + 1);
	if (res == NULL)
		return (NULL);
	ft_memcpy(res, s, ft_strlen(s) + 1);
	return (res);
}
