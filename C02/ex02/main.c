/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 11:41:35 by moabid            #+#    #+#             */
/*   Updated: 2022/02/05 00:30:49 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_str_is_alpha(char *str)
{
	int ind;

	ind = 0;
	while (str[ind] != '\0')
	{
		if ((str[ind] < 'A') || (str[ind] > 'Z' && str[ind] < 'a') || (str[ind] > 'z'))
			return (0);
		ind++;
	}
	return (1);
}

int		main(void)
{
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *p_alp;
	p_alp = alpha;

	char special[] = "ABC abc áéíóú àèìòù âêîôû äëïöü \'\"(){}[]!?@#$&* wxyz WXYZ";
	char *p_spe;
	p_spe = special;

	char empty[] = "";
	char *p_emp;
	p_emp = empty;

	printf("-----\n1 = String contains only alphabetical chars\n0 = String doesn't contain only alphabetical chars\n\n");
	printf("%s = %d\n", alpha, ft_str_is_alpha(p_alp));
	printf("%s = %d\n", special, ft_str_is_alpha(p_spe));
	printf("Empty = %d\n-----\n", ft_str_is_alpha(p_emp));

	return (0);
}