/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 09:16:12 by moabid            #+#    #+#             */
/*   Updated: 2022/02/07 20:50:42 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	g_len;
static char	g_array[10];

void	ft_print(char c)
{
	write(1, &c, 1);
}

void	ft_mid_num(int prev_numb, int reduc_indx)
{
	int	i;

	if (reduc_indx == g_len)
	{
		write(1, g_array, g_len);
		write(1, ", ", 2);
		return ;
	}
	i = prev_numb;
	while (++i <= 10 - g_len + reduc_indx)
	{
		g_array[reduc_indx] = '0' + i;
		ft_mid_num(i, reduc_indx + 1);
	}
}

void	ft_print_last(int i)
{
	char	c;

	while (i <= 9)
	{
		c = '0' + i++;
		ft_print(c);
	}
}

void	ft_print_combn(int n)
{
	int	i;

	i = 0;
	g_len = n;
	while (i != 10 - n)
	{
		g_array[0] = '0' + i;
		ft_mid_num(i++, 1);
	}
	ft_print_last(i);
}
