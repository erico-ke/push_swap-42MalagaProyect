/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erico-ke <erico-ke@42malaga.student.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:18:16 by erico-ke          #+#    #+#             */
/*   Updated: 2025/01/09 17:16:37 by erico-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_g(char *s1, char *s2)
{
	char		*endstr;
	size_t		totlen;
	int			i;
	int			j;

	totlen = ft_strlen_g(s1) + ft_strlen_g(s2);
	endstr = ft_calloc(sizeof(char), (totlen + 1));
	if (!endstr)
		return (NULL);
	i = 0;
	while (s1 && s1[i])
	{
		endstr[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2 && s2[j])
		endstr[i++] = s2[j++];
	free(s1);
	return (endstr);
}

size_t	ft_strlen_g(char *s)
{
	size_t	size;

	size = 0;
	while (s && s[size])
		size++;
	return (size);
}

char	*ft_strchr_g(char *s, int c)
{
	if (!s)
		return (0);
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == *s)
		return ((char *)s);
	return (NULL);
}

void	*ft_calloc_g(size_t nmemb, size_t size)
{
	unsigned char	*p;
	size_t			i;
	size_t			n;

	n = size * nmemb;
	p = malloc(n);
	if (!p)
		return (NULL);
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
