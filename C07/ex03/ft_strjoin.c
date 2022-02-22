/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 23:55:51 by moabid            #+#    #+#             */
/*   Updated: 2022/02/16 21:20:43 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dst, char *src)
{
	while (*src)
		*(dst++) = *(src++);
	return (dst);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char		*new;
	char		*t;
	long long	strs_len;
	int			i;

	if (!size)
	{
		new = (char *)malloc(1);
		new[0] = 0;
		return (new);
	}
	strs_len = 0;
	i = 0;
	while (i < size)
		strs_len += ft_strlen(strs[i++]);
	new = (char *)malloc(strs_len + (size - 1) * ft_strlen(sep) + 1);
	t = ft_strcat(new, strs[0]);
	i = 1;
	while (i < size)
	{
		t = ft_strcat(t, sep);
		t = ft_strcat(t, strs[i++]);
	}
	*t = 0;
	return (new);
}
