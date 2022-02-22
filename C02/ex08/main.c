/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 19:18:01 by moabid            #+#    #+#             */
/*   Updated: 2022/02/14 18:54:44 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char *ft_strupcase(char *str){

	int ind = 0;
	while (str[ind] != '\0')
	{
		if ((str[ind] >= 'A') || (str[ind] <= 'Z'))
		{
			str[ind] += 32 ;
		}
		ind++;
	}
	return (str);
}

int		main(void)
{
	char lowercase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *p_lwr;
	p_lwr = lowercase;
	
	char allcases[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *p_all;
	p_all = allcases;

	char empty[] = "";
	char *p_emp;
	p_emp = empty;

	printf("\n-----\n%s = ", lowercase);
	printf("%s\n", ft_strupcase(p_lwr));
	printf("%s = ", allcases);
	printf("%s\n", ft_strupcase(p_all));
	printf("Empty = %s\n-----\n", ft_strupcase(p_emp));

}