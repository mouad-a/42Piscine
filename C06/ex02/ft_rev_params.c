/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:51:20 by moabid            #+#    #+#             */
/*   Updated: 2022/02/16 01:30:12 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_writter(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i++], 1);
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = argc - 1;
	if (argc > 0)
	{
		while (i != 0)
		{
			ft_writter(argv[i--]);
			write(1, &"\n", 1);
		}
	}
}
