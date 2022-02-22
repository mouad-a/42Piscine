/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   headers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:10:32 by moabid            #+#    #+#             */
/*   Updated: 2022/02/17 15:24:33 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADERS_H
# define HEADERS_H

# include <unistd.h>

# define OPERATORS "+-*/%"

typedef int	(*t_operate)(int, int);

int		ft_sum(int a, int b);
int		ft_min(int a, int b);
int		ft_mult(int a, int b);
int		ft_div(int a, int b);
int		ft_modu(int a, int b);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_atoi(char *str);
int		ft_find_index(char c, char *str);
void	ft_putnbr(int nbr);

#endif