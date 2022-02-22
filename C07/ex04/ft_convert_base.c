/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 19:28:40 by moabid            #+#    #+#             */
/*   Updated: 2022/02/17 10:33:08 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		ft_atoi_base(char *str, char *base);

int	clean_base(char *base)
{
	char	*buffer;
	int		n;

	n = 0;
	while (*base)
	{
		if (*base == '+' || *base == '-' || *base == ' '
			|| (*base >= '\t' && *base <= '\r'))
			return (0);
		buffer = base;
		while (*buffer++)
		{
			if (*buffer == *base)
				return (0);
		}
		n++;
		base++;
	}
	return (n);
}

int	dec_to_base_len(int nbr, int n, int length)
{
	if (nbr > n - 1)
		return (dec_to_base_len(nbr / n, n, length + 1));
	else
		return (length);
}

void	dec_to_base(char *nbr, char *base, int n, int dec)
{
	if (dec > n - 1)
		dec_to_base(nbr - 1, base, n, dec / n);
	*nbr = base[dec % n];
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		number;
	char	*result;
	int		new_base_from;
	int		sign;
	int		size;

	new_base_from = clean_base(base_to);
	if (new_base_from < 2)
		return (NULL);
	sign = 0;
	number = ft_atoi_base(nbr, base_from);
	if (number < 0)
	{
		sign = 1;
		number *= -1;
	}
	size = (dec_to_base_len(number, new_base_from, 1) + sign) * sizeof(*result);
	result = (char *)malloc(size);
	if (sign)
		*result++ = '-';
	dec_to_base(result + size - 1 - sign, base_to, new_base_from, number);
	return (result - sign);
}
