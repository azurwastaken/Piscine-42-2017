/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaseaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 00:15:13 by mcaseaux          #+#    #+#             */
/*   Updated: 2017/07/13 16:35:42 by mcaseaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		ft_strlen_spe(char **str)
{
	int i;
	int j;
	int res;

	i = 0;
	res = 0;
	j = 0;
	while (str[i])
	{
		j = 0;
		while (str[i][j] != '\0')
		{
			j++;
			res++;
		}
		i++;
	}
	return (res);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int begin;

	i = 0;
	begin = 0;
	while (dest[begin] != '\0')
	{
		begin++;
	}
	while (src[i])
	{
		dest[begin + i] = src[i];
		i++;
	}
	dest[begin + i] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		res;
	int		strmaxlenght;
	char	*concat;

	i = 1;
	j = 0;
	res = 0;
	strmaxlenght = ft_strlen_spe(argv) + argc * 2;
	concat = (char *)malloc(sizeof(*concat) * (strmaxlenght));
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			concat[res] = argv[i][j];
			j++;
			res++;
		}
		concat[res++] = i++ != argc - 1 ? '\n' : '\0';
	}
	concat[strmaxlenght - argc] = '\0';
	return (concat);
}
