/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 10:54:51 by moabid            #+#    #+#             */
/*   Updated: 2022/02/17 15:21:20 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (i < length - 1)
	{
		if (f(*tab, *(tab + 1)) <= 0)
			count++;
	}
	return (count == length - 1);
}
