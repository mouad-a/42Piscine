/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 20:48:36 by moabid            #+#    #+#             */
/*   Updated: 2022/02/10 20:49:03 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

char	*ft_strdup(char *src)
{
	char	*new;
	int		i;
	
	i = 0;
	new = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!new)
		return NULL;
	while (*src)
		new[i++] = *src++;
	new[i] = '\0';
	return (new);
}


void strdup_test()
{
    char *testcases[] = {
        "    amine",
        "mohamed",
        "123? \nk",
        "12 3 \nk",
        "12 3\nk",
        "\ttest tab",
        "Capital"
    };
    int num_cases = (sizeof(testcases) / sizeof(char *));
    int i = -1;
    while (++i < num_cases)
        printf("case : %s => strdup : %s || ft_strdup : %s \n\n",testcases[i], strdup(testcases[i]), ft_strdup(testcases[i]));
}

int main()
{
    strdup_test();
}
