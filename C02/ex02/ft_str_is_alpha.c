/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 14:53:23 by moabid            #+#    #+#             */
/*   Updated: 2022/02/06 20:19:32 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	ind;

	ind = 0;
	while (str[ind] != '\0')
	{
		if ((str[ind] < 'A')
			|| (str[ind] > 'Z' && str[ind] < 'a')
			|| (str[ind] > 'z'))
			return (0);
		ind++;
	}
	return (1);
}
