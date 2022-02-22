/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:52:47 by moabid            #+#    #+#             */
/*   Updated: 2022/02/17 14:58:29 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	ind;

	ind = 0;
	while ((s1[ind] == s2[ind])
		&& (s1[ind] != '\0')
		&& (s2[ind] != '\0'))
		ind++;
	return (s1[ind] - s2[ind]);
}

int	ft_tabsize(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	int		j;
	int		size;
	char	*temp;

	i = 1;
	size = ft_tabsize(tab);
	while (i < size)
	{
		j = 0;
		while (++j < size)
		{
			if (ft_strcmp(tab[j - 1], tab[j]) > 0)
			{
				temp = tab[j - 1];
				tab[j - 1] = tab[j];
				tab[j] = temp;
			}
		}
		i++;
	}
}
