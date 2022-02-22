/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 15:48:10 by moabid            #+#    #+#             */
/*   Updated: 2022/02/06 16:32:25 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	first_cap;
	int	ind;

	first_cap = 1;
	ind = 0;
	while (str[ind] != '\0')
	{
		if ((str[ind] >= 'a' && str[ind] <= 'z')
			|| (str[ind] >= 'A' && str[ind] <= 'Z')
			|| (str[ind] >= '0' && str[ind] <= '9'))
		{
			if (first_cap && (str[ind] >= 'a' && str[ind] <= 'z'))
				str[ind] -= 32;
			else if (!first_cap && (str[ind] >= 'A' && str[ind] <= 'Z'))
				str[ind] += 32;
			first_cap = 0;
		}
		else
			first_cap = 1;
		ind++;
	}
	return (str);
}
