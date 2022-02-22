/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:23:17 by moabid            #+#    #+#             */
/*   Updated: 2022/02/17 15:22:54 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

void	init(t_operate f[5])
{
	f[0] = ft_sum;
	f[1] = ft_min;
	f[2] = ft_mult;
	f[3] = ft_div;
	f[4] = ft_modu;
}

int	checker(char *op)
{
	if (ft_find_index(*op, OPERATORS) >= 0 && !*(op + 1))
		return (1);
	return (0);
}

int	main(int argc, char *argv[])
{
	t_operate	operation;
	t_operate	operations[5];

	init(operations);
	if (argc == 4 && checker(argv[2]))
	{
		if (*argv[2] == '/' && *argv[3] == '0')
			ft_putstr("Stop : division by zero");
		else if (*argv[2] == '%' && *argv[3] == '0')
			ft_putstr("Stop : modulo by zero");
		else
		{
			operation = operations[ft_find_index(*argv[2], OPERATORS)];
			ft_putnbr(operation(ft_atoi(argv[1]), ft_atoi(argv[3])));
		}
		ft_putchar('\n');
	}
	else
		ft_putstr("0\n");
	return (0);
}
