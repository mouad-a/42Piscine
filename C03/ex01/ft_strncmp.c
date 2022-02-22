/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 21:17:57 by moabid            #+#    #+#             */
/*   Updated: 2022/02/08 18:50:57 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	ind;

	ind = 0;
	while ((s1[ind] == s2[ind]) && (ind != n - 1)
		&& s1[ind] != '\0' && s2[ind] != '\0')
		ind++;
	if (n == 0)
		return (0);
	else
		return (s1[ind] - s2[ind]);
}
