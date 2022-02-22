/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 14:00:33 by moabid            #+#    #+#             */
/*   Updated: 2022/02/06 22:40:33 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rush02(int x, int y)
{
	int i;
	int j;

	j = 1;
	while (j <= y && x > 0)
	{
		i = 1;
		while (i <= x )
		{
			if ((i == 1 && j == 1) || (i == x && j == 1)||(i == 1 && j == y) || (i == x && j == y))
				print('o');
			else if (i == 1 || i == x)
				print('|');
			else if ((j == 1) || (j == y))
				print('-');
			else
				print(' ');
			i++;
		}
		print('\n');
		j++;
	}
}

int main(void)
{
	rush02(5, 5);
	return 0;
}