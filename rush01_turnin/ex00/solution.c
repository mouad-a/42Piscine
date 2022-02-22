/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solution.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 13:30:34 by moabid            #+#    #+#             */
/*   Updated: 2022/02/15 16:03:09 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

int	check_invalid_case(int arr[4][4], int pos, int entry[16])
{
	if (check_row_left(arr, pos, entry) == FALSE)
		return (FALSE);
	if (check_row_right(arr, pos, entry) == FALSE)
		return (FALSE);
	if (check_col_down(arr, pos, entry) == FALSE)
		return (FALSE);
	if (check_col_up(arr, pos, entry) == FALSE)
		return (FALSE);
	return (TRUE);
}

int	solve(int arr[4][4], int input[16], int pos)
{
	int	size;

	if (pos == 16)
		return (TRUE);
	size = 1;
	while (size <= 4)
	{
		if (check_no_double(arr, size, pos) == TRUE)
		{
			arr[pos / 4][pos % 4] = size;
			if (check_invalid_case(arr, pos, input) == TRUE)
			{
				if (solve(arr, input, pos + 1) == TRUE)
					return (TRUE);
			}
			else
				arr[pos / 4][pos % 4] = 0;
		}
		size++;
	}
	return (FALSE);
}

void	display_solution(int arr[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ft_putnbr(arr[i][j]);
			if (j < 3)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
