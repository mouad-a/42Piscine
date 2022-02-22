/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 13:02:33 by moabid            #+#    #+#             */
/*   Updated: 2022/02/13 17:21:49 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

int	main(int argc, char **argv)
{
	int	*input;
	int	arr[4][4];
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			arr[i][j] = 0;
			j++;
		}
		i++;
	}
	if (check(argc, argv) == FALSE)
		return (TRUE);
	input = get_numbers(argv[1]);
	if (solve(arr, input, 0) == TRUE)
		display_solution(arr);
	else
		ft_error();
	return (TRUE);
}
