/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erico-ke <erico-ke@42malaga.student.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 17:53:03 by erico-ke          #+#    #+#             */
/*   Updated: 2025/03/12 20:16:51 by erico-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*lst_new(int content)
{
	t_stack	*x;

	x = (t_stack *) malloc (sizeof(t_stack));
	if (!x)
		return (NULL);
	x->content = &content;
	x->next = NULL;
	return (x);
}

int	ft_decomprime(char *str, t_push_swap *lst, int i, int j)
{
	char	**res;
	
	res = ft_split(str, ' ');
	while (res[i])
	{
		j = -1;
		while (res[i][++j])
			if (ft_isdigit(res[i][j]) == 0)
				print_error();
		i++;
	}
	lst->a = lst_new((int)ft_atol(res[0]));
	i = 1;
	while (res[i])
	{
		if (!lst->a)
			return (EXIT_FAILURE);
		lst->a->next = lst_new((int)ft_atol(res[i]));
		if (!lst->a->next)
			return (EXIT_FAILURE);
		lst->a = lst->a->next;
		i++;
	}
	return (EXIT_SUCCESS);
}

int	ft_init(char **str, t_push_swap *lst, int i, int j)
{
	while (str[i])
	{
		j = 0;
		while(str[i][j])
		{
			if (ft_isdigit(str[i][j]) == 0)
				return (print_error());
			j++;
		}
		i++;
	}
	lst->a = lst_new((int)ft_atol(str[1]));
	i = 2;
	while (str[i])
	{
		if (!lst->a)
			return (EXIT_FAILURE);
		lst->a->next = lst_new((int)ft_atol(str[i]));
		if (!lst->a->next)
			return (EXIT_FAILURE);
		lst->a = lst->a->next;
		i++;
	}
	return (EXIT_SUCCESS);
}

int	ft_isinputvalid(char **input)
{
	int	i;
	
	i = 1;
	while (input[i])
	{
		if (input[i][0] == '\0')
			return (print_error());
		i++;
	}
	return (EXIT_SUCCESS);
}

int	control(int argc, char **input, t_push_swap *lst)
{
	if (ft_isinputvalid(input) == EXIT_FAILURE)
		return (EXIT_FAILURE);
	if (argc == 2)
	{
		if (ft_decomprime(input[1], lst, 0, 0) == EXIT_FAILURE)
			return (EXIT_FAILURE);
	}
	else
		if (ft_init(input, lst, 1, 0) == EXIT_FAILURE)
			return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}
