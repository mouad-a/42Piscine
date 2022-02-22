/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 12:59:03 by moabid            #+#    #+#             */
/*   Updated: 2022/02/08 15:15:24 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	ind;

	ind = 0;
	while (src[ind] != '\0' && ind != n)
	{
		dest[ind] = src[ind];
		ind++;
	}
	while (ind < n)
	{
		dest[ind] = '\0';
		ind++;
	}
	return (dest);
}
