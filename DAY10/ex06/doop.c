/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaseaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 17:22:35 by mcaseaux          #+#    #+#             */
/*   Updated: 2017/07/20 11:28:09 by mcaseaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doop_fct.h"

int			isvalid(char *str)
{
	if (!str)
		return (0);
	else if (!(str[0] == '*' || str[0] == '/' || str[0] == '-' || str[0] == '+'
				|| str[0] == '%'))
	{
		write(1, "0\n", 2);
		return (0);
	}
	return (1);
}

t_operation	operation(char *str)
{
	int				i;
	t_operation		tab[5];

	tab[0] = &divide;
	tab[1] = &multiple;
	tab[2] = &substract;
	tab[3] = &add;
	tab[4] = &modulo;
	if (isvalid(str) == 0)
		return (0);
	else if (str[0] == '/' && !str[1])
		return (tab[0]);
	else if (str[0] == '*' && !str[1])
		return (tab[1]);
	else if (str[0] == '-' && !str[1])
		return (tab[2]);
	else if (str[0] == '+' && !str[1])
		return (tab[3]);
	else if (str[0] == '%' && !str[1])
		return (tab[4]);
	else
		write(1, "0\n", 2);
	return (0);
}

int			main(int argc, char **argv)
{
	int			a;
	int			b;
	t_operation	funptr;

	if (argc < 4)
		return (0);
	funptr = operation(argv[2]);
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	if ((b == 0) && (funptr == &divide))
	{
		write(1, "Stop : division by zero\n", 24);
		return (0);
	}
	else if ((b == 0) && (funptr == &modulo))
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	else if (funptr != 0)
	{
		ft_putnbr(funptr(a, b));
		write(1, "\n", 1);
	}
	return (0);
}
