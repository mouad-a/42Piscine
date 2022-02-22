/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 21:33:26 by moabid            #+#    #+#             */
/*   Updated: 2022/02/17 15:00:51 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*num;
	int	ind;

	ind = 0;
	num = (int *)malloc(sizeof(*tab) * length);
	if (!num)
		return (NULL);
	while (i < length)
	{
		num[i] = f(tab[i]);
		i++;
	}
	return (num);
}
