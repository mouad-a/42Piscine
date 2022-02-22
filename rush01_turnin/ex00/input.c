/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 17:54:37 by moabid            #+#    #+#             */
/*   Updated: 2022/02/13 17:27:05 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include <stdlib.h>

int	check(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_error();
		return (FALSE);
	}
	if (ft_strlen(argv[1]) != 31)
	{
		ft_error();
		return (FALSE);
	}
	return (TRUE);
}

int	*get_numbers(char *str)
{
	int	i;
	int	j;
	int	*nums;

	nums = (int *)malloc(sizeof(int) * 16);
	if (!nums)
		return (0);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			nums[j] = str[i] - '0';
			j++;
		}
		i++;
	}
	return (nums);
}
