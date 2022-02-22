/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:51:11 by moabid            #+#    #+#             */
/*   Updated: 2022/02/13 19:51:32 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_stock_str.h"

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
	new = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!new)
		return (NULL);
	while (*src)
		new[i++] = *src++;
	new[i] = '\0';
	return (new);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*buffer;
	t_stock_str	*structmake;
	int			i;

	i = 0;
	buffer = (t_stock_str *)malloc(sizeof(*buffer) * (ac + 1));
	if (!buffer)
		return (NULL);
	structmake = buffer;
	while (i < ac)
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
	
	if (agc > 1)
	{
		stock = ft_strs_to_tab(agc, agv);
		while (stock->str)
		{
			printf("str: %s\n", stock->str);
			printf("copy: %s\n", stock->copy);
			printf("size: %d\n", stock->size);
			stock++;
			printf("\n");
		}
	}
	printf("\n");
	return (0);
}