/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erico-ke <erico-ke@42malaga.student.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 17:53:03 by erico-ke          #+#    #+#             */
/*   Updated: 2025/03/20 13:41:32 by erico-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_decomprime(char *str, t_push_swap *lst, int i, int j)
{
	char	**res;
	t_stack	*tmp;
	
	res = ft_split(str, ' ');
	while (res[++i])
	{
		j = -1;
		while (res[i][++j])
			if (ft_isdigit(res[i][j]) == 0)
				return(EXIT_FAILURE);
	}
	lst->a = lst_new(ft_atol(res[0]));
	tmp = lst->a;
	i = 0;
	while (res[++i])
	{
		if (!tmp)
			return (EXIT_FAILURE);
		tmp->next = lst_new(ft_atol(res[i]));
		if (!tmp->next)
			return (EXIT_FAILURE);
		tmp = tmp->next;
	}
	return (EXIT_SUCCESS);
}

int	ft_init(char **str, t_push_swap *lst, int i, int j)
{
	t_stack	*tmp;

	while (str[++i])
	{
		j = -1;
		while(str[i][++j])
			if (ft_isdigit(str[i][j]) == 0)
				return (EXIT_FAILURE);
	}
	lst->a = lst_new(ft_atol(str[1]));
	tmp = lst->a;
	i = 1;
	while (str[++i])
	{
		if (!tmp)
			return (EXIT_FAILURE);
		tmp->next = lst_new(ft_atol(str[i]));
		if (!tmp->next)
			return (EXIT_FAILURE);
		tmp = tmp->next;
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
			return (EXIT_FAILURE);
		i++;
	}
	return (EXIT_SUCCESS);
}
//Esta funcion no esta funcionando.... ¿PORQUE? ni idea...
//LOS SACKS NO SE ESTAN GENERANDO BIEN?????????????????????????
//WTF
int	ft_checkforvalidlst(t_stack *a)
{
	t_stack	*tmp;

	tmp = NULL;
	while (a)
	{
		tmp = a->next;
		if (a->content > INT_MAX || a->content < INT_MIN)
			return (EXIT_FAILURE);
		while(tmp)
		{
			if (a->content == tmp->content)
				return (EXIT_FAILURE);
			tmp = tmp->next;
		}
		a = a->next;
	}
	return (EXIT_SUCCESS);
}

int	control(int argc, char **input, t_push_swap *lst)
{
	if (ft_isinputvalid(input) == EXIT_FAILURE)
		return (EXIT_FAILURE);
	if (argc == 2)
	{
		if (ft_decomprime(input[1], lst, -1, 0) == EXIT_FAILURE)
			return (EXIT_FAILURE);
	}
	else
		if (ft_init(input, lst, 0, 0) == EXIT_FAILURE)
			return (EXIT_FAILURE);
	if (ft_checkforvalidlst(lst->a) == EXIT_FAILURE)
		return (EXIT_FAILURE);
	lst->b = NULL;
	return (EXIT_SUCCESS);
}
