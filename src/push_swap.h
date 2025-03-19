/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erico-ke <erico-ke@42malaga.student.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 14:16:11 by erico-ke          #+#    #+#             */
/*   Updated: 2025/03/19 19:27:10 by erico-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libs/libft/src/libft.h"

typedef struct s_stack
{
	int				content;
	struct s_stack	*next;
}	t_stack;

typedef struct s_push_swap
{
	t_stack	*a;
	t_stack	*b;
}	t_push_swap;

/* Parse */
int		control(int argc, char **input, t_push_swap *stu);

/* Error control and output */
int		print_error(void);

/* Utils */
long	ft_atol(char *nptr);

/* List management */
t_stack	*lst_new(int content);
int		ft_lst_size(t_stack *lst);

/* Movements */
t_stack	*sa(t_stack *a);
t_stack	*sb(t_stack *b);
void	ss(t_push_swap	*lst);
void	pa(t_push_swap	*lst);
void	pb(t_push_swap	*lst);

#endif