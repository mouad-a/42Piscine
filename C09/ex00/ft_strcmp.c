/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 16:37:14 by moabid            #+#    #+#             */
/*   Updated: 2022/02/13 16:38:06 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	ind;

	ind = 0;
	while ((s1[ind] == s2[ind])
		&& (s1[ind] != '\0')
		&& (s2[ind] != '\0'))
		ind++;
	return (s1[ind] - s2[ind]);
}
