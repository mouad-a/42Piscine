/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 13:45:35 by moabid            #+#    #+#             */
/*   Updated: 2022/02/03 13:45:35 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	if (*b != 0)
	{
		*a = *a / *b;
		*b = temp % *b;
	}
}

int main(void)
{
    int a = 43;
    int b = 7;
    int div;
    int mod;

    ft_div_mod(a, b, &div, &mod);

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", div);
    printf("%d\n", mod);
    return 0;
    
}
