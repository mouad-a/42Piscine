/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 18:13:41 by moabid            #+#    #+#             */
/*   Updated: 2022/02/13 17:32:57 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

int	check_no_double(int arr[4][4], int size, int pos)
{
	int	i;

	i = 0;
	while (i < pos / 4)
	{
		if (arr[i][pos % 4] == size)
			return (FALSE);
		i++;
	}
	i = 0;
	while (i < pos % 4)
	{
		if (arr[pos / 4][i] == size)
			return (FALSE);
		i++;
	}
	return (TRUE);
}

int	check_col_up(int arr[4][4], int pos, int entry[16])
{
	int	i;
	int	max_size;
	int	visible_towers;

	i = 0;
	max_size = 0;
	visible_towers = 0;
	if (pos / 4 == 3)
	{
		while (i < 4)
		{
			if (arr[i][pos % 4] > max_size)
			{
				max_size = arr[i][pos % 4];
				visible_towers++;
			}
			i++;
		}
		if (entry[pos % 4] != visible_towers)
			return (FALSE);
	}
	return (TRUE);
}

int	check_row_right(int arr[4][4], int pos, int entry[16])
{
	int	i;
	int	max_size_size;
	int	visible_towers;

	i = 3;
	max_size_size = 0;
	visible_towers = 0;
	if (pos % 4 == 3)
	{
		while (i >= 0)
		{
			if (arr[pos / 4][i] > max_size_size)
			{
				max_size_size = arr[pos / 4][i];
				visible_towers++;
			}
			i--;
		}
		if (entry[12 + pos / 4] != visible_towers)
			return (FALSE);
	}
	return (TRUE);
}

int	check_col_down(int arr[4][4], int pos, int entry[16])
{
	int	i;
	int	max_size;
	int	visible_towers;

	i = 3;
	max_size = 0;
	visible_towers = 0;
	if (pos / 4 == 3)
	{
		while (i >= 0)
		{
			if (arr[i][pos % 4] > max_size)
			{
				max_size = arr[i][pos % 4];
				visible_towers++;
			}
			i--;
		}
		if (entry[4 + pos % 4] != visible_towers)
			return (FALSE);
	}
	return (TRUE);
}

int	check_row_left(int arr[4][4], int pos, int entry[16])
{
	int	i;
	int	max_size;
	int	visible_towers;

	i = 0;
	max_size = 0;
	visible_towers = 0;
	if (pos % 4 == 3)
	{
		while (i < 4)
		{
			if (arr[pos / 4][i] > max_size)
			{
				max_size = arr[pos / 4][i];
				visible_towers++;
			}
			i++;
		}
		if (entry[8 + pos / 4] != visible_towers)
			return (FALSE);
	}
	return (TRUE);
}
