/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 17:42:24 by moabid            #+#    #+#             */
/*   Updated: 2022/02/06 15:02:33 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>

int    ft_str_is_printable(char *str)
{
    int    i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] < 32 || str[i] == 127)
        {
            return (0);
        }
        i++;
    }
    return (1);
}

int		main(void)
{
	char alpha[] = "ABCDEFGHIJKLM NOPQRSTUVWXYZ";
	char *p_alp;
	p_alp = alpha;

	char special[] = "ABC abc áéíóú àèìòù âêîôû äëïöü \'\"(){}[]!?@#$&* wxyz WXYZ";
	char *p_spe;
	p_spe = special;

	char empty[] = "";
	char *p_emp;
	p_emp = empty;

	printf("-----\n1 = String contains only alphabetical chars\n0 = String doesn't contain only alphabetical chars\n\n");
	printf("%s = %d\n", alpha, ft_str_is_printable(p_alp));
	printf("%s = %d\n", special, ft_str_is_printable(p_spe));
	printf("Empty = %d\n-----\n", ft_str_is_printable(p_emp));

	return (0);
}