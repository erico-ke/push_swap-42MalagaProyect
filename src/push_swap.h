/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erico-ke <erico-ke@42malaga.student.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 14:16:11 by erico-ke          #+#    #+#             */
/*   Updated: 2025/03/24 14:37:39 by erico-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libs/libft/src/libft.h"

typedef struct s_stack
{
	long long int	content;
	struct s_stack	*next;
}	t_stack;

typedef struct s_push_swap
{
	t_stack	*a;
	t_stack	*b;
}	t_push_swap;

/* Parse */
int				control(int argc, char **input, t_push_swap *stu);

/* Error control and output */
int				print_error(void);
void			ft_freemen(t_push_swap *lst);
int 			ft_freesplit(char **str);

/* Utils */
long long int	ft_atol(char *s);
int				ft_check_util(char **str, int i);

/* List management */
t_stack			*lst_new(long long int content);
int				ft_lst_size(t_stack *lst);

/* Movements */
void			sa(t_push_swap *lst);
void			sb(t_push_swap *lst);
void			ss(t_push_swap	*lst);
void			pa(t_push_swap	*lst);
void			pb(t_push_swap	*lst);
void			ra(t_push_swap	*lst);
void			rb(t_push_swap	*lst);
void			rr(t_push_swap	*lst);
void			rra(t_push_swap *lst);
void			rrb(t_push_swap *lst);
void			rrr(t_push_swap *lst);

#endif