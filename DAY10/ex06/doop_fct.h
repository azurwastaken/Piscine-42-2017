/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop_fct.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaseaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 17:16:00 by mcaseaux          #+#    #+#             */
/*   Updated: 2017/07/19 22:07:09 by mcaseaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOOP_FCT_H
# define DOOP_FCT_H

# include <unistd.h>

typedef int		(*t_operation) (int, int);

int		ft_atoi(char *str);
int		divide(int a, int b);
int		substract(int a, int b);
int		add(int a, int b);
int		multiple(int a, int b);
int		modulo(int a, int b);
void	ft_putnbr(int nb);
void	ft_putchar(char c);
#endif
