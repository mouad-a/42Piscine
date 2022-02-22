/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:45:43 by moabid            #+#    #+#             */
/*   Updated: 2022/02/17 10:27:58 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		clean_base(char *base);

int	find_index(char c, char *str)
{
	int	index;

	index = 0;
	while (*str)
	{
		if (c == *str)
			return (index);
		str++;
		index++;
	}
	return (-1);
}

int	first_char(char c, char *str)
{
	while (*str)
	{
		if (c == *str)
			return (1);
		str++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int		sign;
	int		number;
	int		n;

	n = clean_base(base);
	if (n < 2)
		return (0);
	sign = 1;
	number = 0;
	while (*str)
	{
		if (*str == '-')
			sign *= -1;
		else if (first_char(*str, base))
		{
			while (first_char(*str, base))
			{
				number = n * number + find_index(*str, base);
				str++;
			}
			break ;
		}
		str++;
	}
	return (sign * number);
}
