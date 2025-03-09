/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erico-ke <erico-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 17:53:03 by erico-ke          #+#    #+#             */
/*   Updated: 2025/03/09 03:28:42 by erico-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*lst_new(void *content)
{
	t_stack	*x;

	x = (t_stack *) malloc (sizeof(t_stack));
	if (!x)
		return (NULL);
	x->content = content;
	x->next = NULL;
	return (x);
}


int	ft_decomprime(char *str, t_push_swap *lst)
{
	int		i;
	char	**res;

	res = ft_split(str, ' ');
	i = 0;
	while (res[i])
	{
		if (ft_isdigit(ft_atoi(res[i])) == 1)
			return (EXIT_FAILURE);
		i++;
	}
	lst->a = lst_new(ft_atoi(res[0]));//El atoi deberia ser atol y luego castearlo a int
	i = 1;
	while (res[i])
	{
		if (!lst->a)
			return (EXIT_FAILURE);
		lst->a->next = lst_new(ft_atoi(res[i]));
		if (!lst->a->next)
			return (EXIT_FAILURE);
		lst->a = lst->a->next;
		i++;
	}
	return (EXIT_SUCCESS);
}

int	ft_init(char **str, t_push_swap *lst)
{
	int	i;

	i = 1;
	while (str[i])
	{
		if (ft_isdigit(str[i]) == 1)
			return (EXIT_FAILURE);
		i++;
	}
	lst->a->next = lst_new(ft_atoi(str[0]));
	i = 1;
	while (str[i])
	{
		if (!lst->a)
			return (EXIT_FAILURE);
		lst->a->next = lst_new(ft_atoi(str[i]));
		if (!lst->a->next)
			return (EXIT_FAILURE);
		lst->a = lst->a->next;
		i++;
	}
	return (EXIT_SUCCESS);
}

/* Esta funcion se va a dedicar a leer los inputs, checkear que sean numeros
y guardarlos en el stack a, tiene que hacerlo ya sea por split en caso de que 
la cantidad de argumentos sea 2 y en el otro caso debera simplemente pasar
argumento a argumento al stack a, recordar hacer ft_isnbr, atol y castear a int
despues delegara a una funcion que se encargue de checkear que no haya duplicados */

int	control(int argc, char **input, t_push_swap *lst)
{
	if (argc == 2)
	{
		if (ft_decomprime(input[1], lst) == EXIT_FAILURE)
			return (EXIT_FAILURE);
	}
	else
		if (ft_init(input, lst) == EXIT_FAILURE)
			return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}
