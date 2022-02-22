/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 17:25:32 by moabid            #+#    #+#             */
/*   Updated: 2022/02/13 18:19:39 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H

# define TRUE 0
# define FALSE 1

void	ft_putnbr(int nb);
void	ft_putchar(char c);
void	display_solution(int arr[4][4]);
void	ft_error(void);

int		check_col_up(int arr[4][4], int pos, int entry[16]);
int		check_row_right(int arr[4][4], int pos, int entry[16]);
int		check_col_down(int arr[4][4], int pos, int entry[16]);
int		check_row_left(int arr[4][4], int pos, int entry[16]);

int		ft_strlen(char *str);
int		*get_numbers(char *str);
int		check(int argc, char **argv);
int		check_no_double(int arr[4][4], int num, int pos);
int		check_invalid_case(int arr[4][4], int pos, int input[16]);
int		solve(int arr[4][4], int input[16], int pos);

#endif
