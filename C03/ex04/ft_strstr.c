
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 12:21:41 by moabid            #+#    #+#             */
/*   Updated: 2022/02/06 12:45:32 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (*to_find == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{	
		if (str[i] == to_find[0])
		{
		j = 0;
			while (str[i + j] == to_find[j] && str[i + j] != '\0')
			{
				if (to_find[j + 1] == '\0')
					return (&str[i]);
				j++;
			}
		}
		i++;
	}
	return (0);
}

int main(){
    char    str[] = "Hiiidiiiiii";
    char    to_find[] = "";

    printf("%s",ft_strstr(str, to_find));
}