/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 20:25:09 by moabid            #+#    #+#             */
/*   Updated: 2022/02/03 23:38:18 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int	*tab, int size)
{
	int	i;
	int	j;
	int	temp;

	j = 1;
	while (j < size)
	{
		temp = tab[j];
		i = j - 1;
		while (tab[i] > temp && i >= 0)
		{
			tab[i + 1] = tab[i];
			i = i - 1;
		}
		tab[i + 1] = temp;
		j++;
	}
}
