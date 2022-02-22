/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:01:31 by moabid            #+#    #+#             */
/*   Updated: 2022/02/09 15:47:36 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	ind;

	ind = 0;
	while ((s1[ind] == s2[ind])
		&& (s1[ind] != '\0')
		&& (s2[ind] != '\0'))
		ind++;
	return (s1[ind] - s2[ind]);
}

void	ft_writter(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i++], 1);
	}
	write(1, "\n", 1);
}

int	ft_print_params(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc > 0)
	{
		while (i != argc)
		{
			ft_writter(argv[i++]);
		}
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		i;
	char	*max;

	i = 1;
	if (argc > 0)
	{
		while (i != argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				max = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = max;
				i = 1;
			}
			else
				i++;
		}	
		ft_print_params(argc, argv);
	}
	return (0);
}
