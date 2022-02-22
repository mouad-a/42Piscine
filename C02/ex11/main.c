/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 11:15:08 by moabid            #+#    #+#             */
/*   Updated: 2022/02/10 19:37:48 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\0')
			break ;
		if (str[i] >= 32 && str[i] < 127)
		{
			ft_putchar(str[i]);
		}
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[str[i] / 16]);
			ft_putchar("0123456789abcdef"[str[i] % 16]);
		}
		i++;
	}
}

void    append_char(char *str, char c)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    printf("replacing %c with index %d to [%c]\n", str[i - 1], i - 1, c);
    str[i - 1] = c;
    printf("it is %c now\n", str[i]);
}


int		main(void)
{
	char special;


	char str1[] = "Coucou\n tu vas bien ?";
	
	char str2[] = "Coucou tu vas bien ?";
	special = 127;
	append_char(str2, special);

	char str3[] = "Coucou tu vas bien ?";
	special = 32;
	append_char(str3, special);

	
	printf("\n-----\nBEF = %s\n", str1);
	ft_putstr_non_printable(str1);

	printf("\n-----\nBEF = %s\n", str2);
	ft_putstr_non_printable(str2);

	printf("\n-----\nBEF = %s\n", str3);
	ft_putstr_non_printable(str3);

	printf("\n--------");
	return 0 ;
}