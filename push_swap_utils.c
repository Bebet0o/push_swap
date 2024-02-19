/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguillot <bguillot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 13:23:53 by bguillot          #+#    #+#             */
/*   Updated: 2024/02/12 14:33:24 by bguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int numlen(int *num)
{
	int i;

	i = 0;
	while(num[i])
		i++;
	return (i);
}

int	double_strlen_numeric(char **str)
{
	int		i;
	int		j;
	int		len;

	i = 0;
	if (!str)
		return (0);
	len = 0;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			if (str[i][j] >= '0' && str[i][j] <= '9')
				len++;
			j++;
		}
		i++;
	}
	return (len);
}
