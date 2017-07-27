/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaseaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 21:02:20 by mcaseaux          #+#    #+#             */
/*   Updated: 2017/07/16 22:12:04 by mcaseaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int		miss_on_line(int nb_seek, int **grille, int num_line);
int		miss_on_column(int nb_seek, int **grille, int num_col);
int		miss_on_bloc(int nb_seek, int **grille, int num_ln, int num_col);
int		global_check (char **grille, int position);
int		isnumber(char c);
int		check_lenght(char **grille, int argc);
int		check_is_number(char **grille);
int		check_error(char **grille, int argc);
void	ft_putchar(char c);
void	print_ln(char line);
void	print_grille(char **grille);
int		check_grille(char **grille);

int		main(int argc, char **argv)
{
	if (check_error(argv, argc))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	else
	{
		global_check(&argv[1], 0);
		if (check_grille(argv) != 1)
			print_grille(argv);
		else
		{
			write(1, "Error\n", 6);
			return (0);
		}
	}
}
