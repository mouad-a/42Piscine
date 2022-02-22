/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 12:04:33 by moabid            #+#    #+#             */
/*   Updated: 2022/02/02 10:56:20 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	res;

	if (n >= 0)
	{
		res = 'P';
		write(1, &res, 1);
	}
	else
	{
		res = 'N';
		write(1, &res, 1);
	}
}
