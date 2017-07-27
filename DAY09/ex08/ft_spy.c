/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaseaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 00:45:01 by mcaseaux          #+#    #+#             */
/*   Updated: 2017/07/14 16:25:02 by mcaseaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_upletter(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (i < ft_strlen(str))
	{
		if (is_upletter(str[i]))
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

int		ft_strstr_spe(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	while (str[i] == ' ')
		i++;
	while (str[i] != '0')
	{
		j = 0;
		if (str[i] != to_find[j])
			return (0);
		while (str[i + j] == to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
			{
				return (1);
			}
		}
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	while (i < argc)
	{
		argv[i] = ft_strlowcase(argv[i]);
		if ((ft_strstr_spe(argv[i], "president")) ||
				(ft_strstr_spe(argv[i], "bauer")) ||
				(ft_strstr_spe(argv[i], "attack")))
		{
			write(1, "Alert!!!\n", 9);
			return (0);
		}
		i++;
	}
	return (0);
}
