/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 11:57:17 by moabid            #+#    #+#             */
/*   Updated: 2022/02/16 22:49:44 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	sign_finder(char *str, int *i)
{
	int	sign;
	int	ind;

	ind = *i;
	sign = 0;
	while (str[ind] == '+' || str[ind] == '-')
	{
		if (str[ind] == '-')
		{
			sign++;
		}
		ind++;
	}
	*i = ind;
	if (sign % 2 == 1)
		return (-1);
	else
		return (1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 0;
	while (str[i] == ' ' || str[i] == '\f'
		|| str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\t' || str[i] == '\v')
			++i;
	sign = sign_finder(str, &i);
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i++] - '0';
	}	
	return (res * sign);
}
