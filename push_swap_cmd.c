/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_cmd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguillot <bguillot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 14:25:35 by bguillot          #+#    #+#             */
/*   Updated: 2024/02/15 13:57:11 by bguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_stacks *stacks)
{
	int	a;
	int b;

	a = stacks->stack_a[0];
	b = stacks->stack_a[1];
	stacks->stack_a[0] = b;
	stacks->stack_a[1] = a;
}

void	swap_b(t_stacks *stacks)
{
	int	a;
	int b;

	a = stacks->stack_b[0];
	b = stacks->stack_b[1];
	stacks->stack_b[0] = b;
	stacks->stack_b[1] = a;
}

void	swap_all(t_stacks *stacks)
{
	int	aa;
	int ab;
	int	ba;
	int bb;

	aa = stacks->stack_a[0];
	ab = stacks->stack_a[1];
	stacks->stack_a[0] = ab;
	stacks->stack_a[1] = aa;
	ba = stacks->stack_b[0];
	bb = stacks->stack_b[1];
	stacks->stack_a[0] = bb;
	stacks->stack_a[1] = ba;
}

void	push_a(t_stacks *stacks)
{
	int a;
	int i;
	int t;
	int	tt;

	a = stacks->stack_b[0];
	i = 0;
	t = 0;
	tt = 0;
	while (stacks->stack_a[i])
	{
		t = stacks->stack_a[i++];
		tt = stacks->stack_a[i];
		stacks->stack_a[i] = t;
	}
	stacks->stack_a[0] = a;
	i = numlen(stacks->stack_b);
	while (i >= 0)
	{
		t = stacks->stack_b[i--];
		tt = stacks->stack_b[i];
		stacks->stack_b[i] = t;
	}
}