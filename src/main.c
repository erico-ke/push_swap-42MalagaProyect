/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erico-ke <erico-ke@42malaga.student.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 14:16:08 by erico-ke          #+#    #+#             */
/*   Updated: 2025/03/12 18:59:10 by erico-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_push_swap	*lst;

	lst = ft_calloc(1, sizeof(t_push_swap));
	if (!lst)
		return (print_error());
	if (argc >= 2)
	{
		control(argc, argv, lst);
	}
	return (0);
}
