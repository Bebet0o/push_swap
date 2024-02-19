/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguillot <bguillot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:23:04 by bguillot          #+#    #+#             */
/*   Updated: 2024/02/15 13:10:58 by bguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*parser(char **input)
{
	int		i;
	int		j;
	int		*num;
	int		n;

	i = 1;
	n = 0;
	num = malloc(sizeof(int) * double_strlen_numeric(input));
	while (input[i])
	{
		j = 0;
		while (input[i][j])
		{
			if (input[i][j] >= '0' && input[i][j] <= '9')
			{
				num[n] = num[n] + (input[i][j] - 48);
				if (input[i][j - 1] == '-')
					num[n] *= -1;
				n++;
			}
			j++;
		}
		i++;
	}
	return (num);
}

int	main(int n, char **input)
{
	int	*num;

	if (n < 2)
		return (EXIT_FAILURE);
	num = parser(input);
	sorting(num);
	return (num[0]);
}
