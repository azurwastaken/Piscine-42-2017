/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_sudoku.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaseaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 23:20:26 by mcaseaux          #+#    #+#             */
/*   Updated: 2017/07/16 22:22:40 by mcaseaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	miss_on_line(char nb_seek, char **grille, int num_line)
{
	int num_col;

	num_col = 0;
	while (num_col < 9)
	{
		if (grille[num_line][num_col] == nb_seek)
			return (0);
		num_col++;
	}
	return (1);
}

int	miss_on_column(char nb_seek, char **grille, int num_col)
{
	int num_line;

	num_line = 0;
	while (num_line < 9)
	{
		if (grille[num_line][num_col] == nb_seek)
			return (0);
		num_line++;
	}
	return (1);
}

int	miss_on_bloc(char nb_seek, char **grille, int num_ln, int num_col)
{
	int num_fst_ln;
	int num_fst_col;

	num_fst_ln = num_ln - (num_ln % 3);
	num_fst_col = num_col - (num_col % 3);
	num_ln = num_fst_ln;
	num_col = num_fst_col;
	while (num_ln < num_fst_ln + 3)
	{
		while (num_col < num_fst_col + 3)
		{
			if (grille[num_ln][num_col] == nb_seek)
				return (0);
			num_col++;
		}
		num_ln++;
	}
	return (1);
}

int	global_check(char **grille, int position)
{
	int		i[2];
	char	nb_seek;

	i[0] = position / 9;
	i[1] = position % 9;
	if (position >= 81)
		return (1);
	if (grille[i[0]][i[1]] != '.')
		return (global_check(grille, position + 1));
	nb_seek = '1';
	while (nb_seek <= '9')
	{
		if (miss_on_line(nb_seek, grille, i[0])
				&& miss_on_column(nb_seek, grille, i[1])
				&& miss_on_bloc(nb_seek, grille, i[0], i[1]))
		{
			grille[i[0]][i[1]] = nb_seek;
			if (global_check(grille, position + 1))
				return (1);
		}
		nb_seek++;
	}
	if (grille[i[0]][i[1]] != '\0')
		grille[i[0]][i[1]] = '.';
	return (0);
}
