/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:51:11 by moabid            #+#    #+#             */
/*   Updated: 2022/02/11 00:34:40 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_stock_str.h"

void	ft_show_tab(struct s_stock_str *par);

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

char	*ft_strdup(char *src)
{
	char	*new;
	int		i;
	
	i = 0;
	if (!(new = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1))))
		return NULL;
	while (*src)
		new[i++] = *src++;
	new[i] = '\0';
	return (new);
}

struct	s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*buffer;
	t_stock_str *structmake;
	int			i;
	
	i = 0;
	if (!(buffer = (t_stock_str*)malloc(sizeof(*buffer) * (ac + 1))))
		return (NULL);
	structmake = buffer;
	while(i < ac)
	{
		structmake -> size = ft_strlen(*av);
		structmake -> str = *av;
		structmake -> copy = ft_strdup(*av);
		i++;
		av++;
		structmake++;
	}
	structmake -> str = '\0';
	return (buffer);
}

int	main()
{
	t_stock_str	*stock;
	char *agv[] = {"test1", "test2", "test3"};
	int agc = 3;
	
	stock = ft_strs_to_tab(agc, agv);
	ft_show_tab(stock);
	

	return (0);
}