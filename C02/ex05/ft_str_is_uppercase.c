/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 14:58:08 by moabid            #+#    #+#             */
/*   Updated: 2022/02/08 18:08:37 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	ind;

	ind = 0;
	while (str[ind] != '\0')
	{
		if ((str[ind] < 'A') || (str[ind] > 'Z' ))
			return (0);
		ind++;
	}
	return (1);
}
