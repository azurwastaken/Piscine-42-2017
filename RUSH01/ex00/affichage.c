/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   affichage.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaseaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 23:38:55 by mcaseaux          #+#    #+#             */
/*   Updated: 2017/07/16 22:13:07 by mcaseaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_ln(char *line)
{
	int i;

	i = 0;
	while (i < 9)
	{
		ft_putchar(line[i]);
		if (i < 8)
			ft_putchar(' ');
		i++;
	}
}

void	print_grille(char **grille)
{
	int i;

	i = 1;
	while (i < 10)
	{
		print_ln(grille[i]);
		ft_putchar('\n');
		i++;
	}
}
