/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 11:44:10 by moabid            #+#    #+#             */
/*   Updated: 2022/02/12 12:26:30 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	g_col[11];
int		g_row[10];
int		g_diag1[19];
int		g_diag2[19];
int		g_solutions;

void	checker(int r, int c, int val)
{
	g_row[r] = val;
	g_diag1[c - r + 9] = val;
	g_diag2[r + c] = val;
}

void	solve(int c)
{
	int	r;

	if (c == 10)
	{
		write(1, g_col, 11);
		++g_solutions;
	}
	r = 0;
	while (r < 10)
	{
		if (!g_row[r] && !g_diag1[c - r + 9] && !g_diag2[r + c])
		{
			checker(r, c, 1);
			g_col[c] = '0' + r;
			solve(c + 1);
			checker(r, c, 0);
		}
		++r;
	}
}

void	init(void)
{
	int	i;

	g_col[10] = '\n';
	g_solutions = 0;
	i = 0;
	while (i < 10)
	{
		g_row[i] = 0;
		g_diag1[i] = 0;
		g_diag2[i] = 0;
		++i;
	}
	while (i < 19)
	{
		g_diag1[i] = 0;
		g_diag2[i] = 0;
		++i;
	}
}

int	ft_ten_queens_puzzle(void)
{
	init();
	solve(0);
	return (g_solutions);
}
