/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erico-ke <erico-ke@42malaga.student.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 14:16:11 by erico-ke          #+#    #+#             */
/*   Updated: 2025/03/13 15:55:44 by erico-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libs/libft/src/libft.h"

typedef struct s_stack
{
	int				*content;
	struct s_stack	*next;
}	t_stack;

typedef struct s_push_swap
{
	t_stack	*a;
	t_stack	*b;
}	t_push_swap;

/* Parse */
/* @brief funcion se va a dedicar a leer los inputs, checkear que sean numeros
y guardarlos en el stack a, tiene que hacerlo ya sea por split en caso de que 
la cantidad de argumentos sea 2 y en el otro caso debera simplemente pasar
argumento a argumento al stack a, recordar hacer ft_isnbr, atol y castear a int
despues delegara a una funcion que se encargue de checkear que no haya duplicados
*/ 
int		control(int argc, char **input, t_push_swap *stu);

/* Error control and output */
int		print_error(void);

/* Utils */
long	ft_atol(char *nptr);

/* List management */
t_stack	*lst_new(int content);

#endif