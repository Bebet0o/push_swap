/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguillot <bguillot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 13:51:30 by bguillot          #+#    #+#             */
/*   Updated: 2024/02/15 13:54:52 by bguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sorting(int *num)
{
    struct s_stacks stacks;

    stacks.stack_a = malloc(sizeof(int) * numlen(num));
	stacks.stack_b = malloc(sizeof(int) * numlen(num));
}