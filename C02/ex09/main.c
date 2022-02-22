/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 19:22:33 by moabid            #+#    #+#             */
/*   Updated: 2022/02/06 19:06:31 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


char	*ft_strcapitalize(char *str)
{
	int first_cap;
	int ind;

	first_cap = 1;
	ind = 0;
	while (str[ind] != '\0')
	{
		if ((str[ind] >= 'a' && str[ind] <= 'z') ||
			(str[ind] >= 'A' && str[ind] <= 'Z') ||
			(str[ind] >= '0' && str[ind] <= '9'))
		{
			if (first_cap && (str[ind] >= 'a' && str[ind] <= 'z'))
				str[ind] -= 32;
			else if (!first_cap && (str[ind] >= 'A' && str[ind] <= 'Z'))
				str[ind] += 32;
			first_cap = 0;
		}
		else
			first_cap = 1;
		ind++;
	}
	return (str);
}

int		main(void)
{
	char str1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	
	char str2[] = " sALuT, ComMenT tu VAS ? 42Mots QUarante-deUX; cinQuantE+ET+un";

	char empty[] = "";

	printf("\n-----\nBEF = %s", str1);
	printf("\nAFT = %s\n", ft_strcapitalize(str1));
	printf("\nBEF = %s", str2);
	printf("\nAFt = %s\n", ft_strcapitalize(str2));
	printf("\nEmpty = %s\n-----\n", ft_strcapitalize(empty));

}