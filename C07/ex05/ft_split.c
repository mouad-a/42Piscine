/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:18:16 by moabid            #+#    #+#             */
/*   Updated: 2022/02/16 23:17:53 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_firstcharset(char str, char *charset)
{
	int	j;

	j = 0;
	while (charset[j])
	{
		if (str == charset[j])
			return (1);
		j++;
	}
	return (0);
}

int	ft_numbofstrings(char *str, char *charset)
{
	int	k;

	k = 0;
	while (*str)
	{
		if (!ft_firstcharset(*str, charset))
		{
			k++;
			while (*str && !ft_firstcharset(*str, charset))
				str++;
		}
		str++;
	}
	return (k);
}

void	ft_copie(char *str, char *dest, char *src)
{
	while (src < str)
		*(dest++) = *(src++);
	*dest = '\0';
}

char	**ft_split(char *str, char *charset)
{
	char	**dest;
	char	*from;
	int		i;

	i = 0;
	dest = malloc(sizeof(char *) * ft_numbofstrings(str, charset));
	if (!str && !charset)
	{
		dest[0] = 0;
		return (dest);
	}
	while (*str)
	{
		if (!ft_firstcharset(*str, charset))
		{
			from = str;
			while (*str && !(ft_firstcharset(*str, charset)))
				str++;
			dest[i] = malloc(sizeof(char *) * (str - from + 1));
			ft_copie(str, dest[i++], from);
		}
		str++;
	}
	dest[i] = 0;
	return (dest);
}
