/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 15:06:14 by ccazuc            #+#    #+#             */
/*   Updated: 2017/07/23 12:32:06 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"
#include "solve.h"
#include "check_dim.h"

void	check_colle(char **tab)
{
	int		value[3];

	value[WIDTH] = get_width(tab);
	value[HEIGHT] = get_height(tab);
	value[FOUND] = 0;
	parse_colle(tab, "0oooo-|", value);
	parse_colle(tab, "1/\\\\/**", value);
	parse_colle(tab, "2AACCBB", value);
	parse_colle(tab, "3ACACBB", value);
	parse_colle(tab, "4ACCABB", value);
	if (!value[FOUND])
		ft_putstr("aucune");
}

char	check_char(char **tab, char *pattern, int *value, int *coord)
{
	if (coord[0] == 0 && coord[1] == 0 && tab[coord[0]][coord[1]] != pattern[1])
		return (0);
	if (coord[0] == 0 && coord[1] == value[WIDTH] - 1 && coord[1] != 0
			&& tab[coord[0]][coord[1]] != pattern[2])
		return (0);
	if (coord[0] == value[HEIGHT] && coord[0] != 0 && coord[1] == 0
			&& tab[coord[0]][coord[1]] != pattern[3])
		return (0);
	if (coord[0] == value[HEIGHT] && coord[0] != 0 && coord[1] == value[WIDTH]
			- 1 && coord[1] != 0 && tab[coord[0]][coord[1]] != pattern[4])
		return (0);
	if ((coord[0] == 0 || coord[0] == value[HEIGHT]) && coord[1] > 1 && coord[1]
			< value[WIDTH] - 1 && tab[coord[0]][coord[1]] != pattern[5])
		return (0);
	if ((coord[1] == 0 || coord[1] == value[WIDTH] - 1) && coord[0] > 1 &&
			coord[0] < value[HEIGHT] && tab[coord[0]][coord[1]] != pattern[6])
		return (0);
	if (coord[1] == value[WIDTH] && tab[coord[0]][coord[1]] != '\n')
		return (0);
	if (coord[1] > 0 && coord[1] < value[WIDTH] - 1 && coord[0] > 0 &&
			coord[0] < value[HEIGHT] && tab[coord[0]][coord[1]] != ' ')
		return (0);
	return (1);
}

char	parse_colle(char **tab, char *pattern, int *value)
{
	int		coord[2];

	coord[0] = -1;
	while (tab[++coord[0]])
	{
		coord[1] = -1;
		while (tab[coord[0]][++coord[1]])
			if (!check_char(tab, pattern, value, coord))
				return (0);
	}
	print_colle(pattern[0], value);
	value[FOUND] = 1;
	return (1);
}

void	print_colle(char colle, int *value)
{
	if (value[FOUND])
		ft_putstr(" || ");
	ft_putstr("[colle-0");
	ft_putchar(colle);
	ft_putstr("] [");
	if (value[WIDTH] == -1)
		ft_putnbr(value[WIDTH] + 1);
	else
		ft_putnbr(value[WIDTH]);
	ft_putstr("] [");
	ft_putnbr(value[HEIGHT] + 1);
	ft_putchar(']');
}
