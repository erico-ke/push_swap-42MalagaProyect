/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erico-ke <erico-ke@42malaga.student.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 14:16:08 by erico-ke          #+#    #+#             */
/*   Updated: 2025/03/05 18:11:38 by erico-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_push_swap	*stu;

	stu = ft_calloc(1, sizeof(t_push_swap));
	if (!stu)
		return (print_error());
	if (argc >= 2)
	{
		control(argc, argv, stu);
	}
	return (0);
}
