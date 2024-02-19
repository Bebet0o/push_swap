/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguillot <bguillot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:23:34 by bguillot          #+#    #+#             */
/*   Updated: 2024/02/15 13:57:24 by bguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

# define EXIT_SUCCES 0
# define EXIT_FAILURE 1

# define BOOL_TRUE 1
# define BOOL_FALSE 0

typedef struct	s_stacks
{
	int	*stack_a;
	int	*stack_b;
}		t_stacks;

int		*parser(char **input);
int		double_strlen_numeric(char **str);
int		numlen(int *num);
void	sorting(int *num);
void	swap_a(t_stacks *stacks);
void	swap_b(t_stacks *stacks);
void	swap_all(t_stacks *stacks);
void	push_a(t_stacks *stacks);

#endif