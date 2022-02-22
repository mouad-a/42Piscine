/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 14:57:34 by moabid            #+#    #+#             */
/*   Updated: 2022/02/08 18:05:45 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	ind;

	ind = 0;
	while (str[ind] != '\0')
	{
		if ((str[ind] < 'a') || (str[ind] > 'z'))
			return (0);
		ind++;
	}
	return (1);
}
