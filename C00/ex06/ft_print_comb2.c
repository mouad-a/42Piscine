/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 12:36:09 by moabid            #+#    #+#             */
/*   Updated: 2022/02/15 20:35:26 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char value)
{
	write(1, &value, 1);
}

void	ft_display(int value)
{
	int	right_num;
	int	left_num;

	if (value > 9)
	{
		right_num = value / 10;
		left_num = value % 10;
		ft_putchar(right_num + '0');
		ft_putchar(left_num + '0');
	}
	else
	{
		ft_putchar('0');
		ft_putchar(value + 48);
	}
}

void	ft_result(int x, int y)
{
	ft_display(x);
	ft_putchar(' ');
	ft_display(y);
	if (x < 98 || y < 99)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_result(a, b);
			b++;
		}
		a++;
	}
}

int main(void)
{
	ft_print_comb2();
}