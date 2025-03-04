/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erico-ke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:26:08 by erico-ke          #+#    #+#             */
/*   Updated: 2024/09/24 15:26:10 by erico-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	wordlencount(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

static size_t	wordcount(char const *s, char c)
{
	size_t	i;
	size_t	count;
	int		isword;

	i = 0;
	count = 0;
	isword = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] != c && isword == 0)
		{
			isword = 1;
			count++;
		}
		else if (s[i] == c && isword == 1)
			isword = 0;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	i;
	size_t	j;

	res = (char **) malloc(sizeof(char *) * (wordcount(s, c) + 1));
	if (!res)
		return (NULL);
	i = -1;
	j = 0;
	while (++i < wordcount(s, c) && j < ft_strlen(s))
	{
		while (s[j] == c && s[j])
			j++;
		res[i] = ft_substr(&s[j], 0, wordlencount(&s[j], c));
		if (!res[i])
		{
			while (i > 0)
				free(res[--i]);
			free(res);
			return (NULL);
		}
		j += wordlencount(&s[j], c);
	}
	res[i] = NULL;
	return (res);
}
