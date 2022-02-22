/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 21:34:32 by moabid            #+#    #+#             */
/*   Updated: 2022/02/16 20:59:07 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;
	int minimal;

	i = 0;
	minimal = min;
	if (min >= max)
		return (0);
	arr = (int *)malloc(sizeof(int) * (max - min));
	if (!arr)
		return (0);
	while (i < (max - min))
		arr[i++] = minimal++;
	return (arr);
}

void	print_test(int *test, int size)
{
	int i;

	for (i = 0; i <= size - 1; i++)
	{
		printf("%d - ", test[i]);
	}
}

int	main(void)
{
	int test0[] = ft_range(1, 11);
	int test1[] = ft_range(2, 1);
	int test2[] = ft_range(3, 3);
	int test3[] = ft_range(4, 41);
	int test4[] = ft_range(10, -10);

	printf("\n* test0 (1, 11): ");
	print_test(test0, 10);

	printf("\n* test1 (2, 1): ");
	print_test(test1, 0);

	printf("\n* test2 (3, 3): ");
	print_test(test2, 0);

	
	printf("\n* test4 (4, 41): ");
	print_test(test3, 37);

	printf("\n* test4 (10, -10): ");
	print_test(test4, 0);
}
