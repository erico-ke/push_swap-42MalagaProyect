/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erico-ke <erico-ke@42malaga.student.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 14:16:08 by erico-ke          #+#    #+#             */
/*   Updated: 2025/03/20 18:36:21 by erico-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_push_swap	*lst;

	if (argc >= 2)
	{
		lst = ft_calloc(1, sizeof(t_push_swap));
		if (control(argc, argv, lst) == EXIT_FAILURE)
			return (print_error());
		ft_freemen(lst);
	}
	else
		return (print_error());
	return (EXIT_SUCCESS);
}
