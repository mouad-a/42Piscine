/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 22:26:15 by moabid            #+#    #+#             */
/*   Updated: 2022/02/17 10:39:36 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	minimal;
	int	*arr;
	int	i;

	i = 0;
	minimal = min;
	if (min >= max)
		return (0);
	*range = (int *)malloc(sizeof(int) * (max - min));
	if (*range == 0)
		return (-1);
	arr = *range;
	while (i < (max - min))
		arr[i++] = minimal++;
	return (max - min);
}
