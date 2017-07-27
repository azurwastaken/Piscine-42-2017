/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaseaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 00:05:41 by mcaseaux          #+#    #+#             */
/*   Updated: 2017/07/16 22:23:46 by mcaseaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		isnumber(char c)
{
	if ((c >= '1' && c <= '9') || c == '.')
		return (1);
	return (0);
}

int		check_lenght(char **grille, int argc)
{
	int i;
	int j;

	i = 1;
	if (argc != 10)
		return (1);
	while (i < 10)
	{
		j = 0;
		while (grille[i][j] != '\0')
		{
			j++;
		}
		if (j != 9)
			return (1);
		i++;
	}
	return (0);
}

int		check_is_number(char **grille)
{
	int i;
	int j;

	i = 1;
	while (i < 10)
	{
		j = 0;
		while (j < 9)
		{
			if (isnumber(grille[i][j]) == 0)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int		check_error(char **grille, int argc)
{
	if (check_lenght(grille, argc) != 0)
		return (1);
	else if (check_is_number(grille) != 0)
		return (1);
	else
		return (0);
}
