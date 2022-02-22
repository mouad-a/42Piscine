/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 23:55:51 by moabid            #+#    #+#             */
/*   Updated: 2022/02/16 20:49:36 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

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
	char		*ret;
	char		*t;
	long long	strs_len;
	int			i;

	if (!size)
	{
		ret = (char*)malloc(1);
		ret[0] = 0;
		return (ret);
	}
	strs_len = 0;
	i = 0;
	while (i < size)
		strs_len += ft_strlen(strs[i++]);
	ret = (char*)malloc(strs_len + (size - 1) * ft_strlen(sep) + 1);
	t = ft_strcat(ret, strs[0]);
	i = 1;
	while (i < size)
	{
		t = ft_strcat(t, sep);
		t = ft_strcat(t, strs[i++]);
	}
	*t = 0;
	return (ret);
}
#include <stdio.h>
int    main(void)
{
    char *text[12];

    text[0] = "Testando";
    text[1] = "a";
    text[2] = "funcao";
    text[3] = "ft_strjoin";
    text[4] = "com";
    text[5] = "o";
    text[6] = "separador";
    text[7] = "\' - \'";
    text[8] = "e tamanho";
    text[9] = "";
    text[10] = "10";
    text[11] = "";

    printf("%s\n", ft_strjoin(12, text, " - "));
}