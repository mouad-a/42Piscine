/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 12:46:43 by moabid            #+#    #+#             */
/*   Updated: 2022/02/10 10:23:09 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d_len;
	unsigned int	s_len;
	unsigned int	offset;
	unsigned int	ind;

	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	offset = d_len;
	ind = 0;
	if (size == 0)
		return (d_len);
	while ((src[ind] != '\0') && (ind + offset < (size - 1)))
	{
		dest[ind + offset] = src[ind];
		ind++;
	}
	if (ind < size)
		dest[ind + offset] = '\0';
	if (d_len > size)
		return (s_len + size);
	return (d_len + s_len);
}
