/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaseaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 19:52:51 by mcaseaux          #+#    #+#             */
/*   Updated: 2017/07/16 22:24:33 by mcaseaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_ln(char *line)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (line[i] == '.')
			return (1);
		i++;
	}
	return (0);
}

int		check_grille(char **grille)
{
	int i;

	i = 1;
	while (i < 10)
	{
		if (check_ln(grille[i]) == 1)
			return (1);
		i++;
	}
	return (0);
}
