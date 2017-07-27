/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaseaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 23:34:24 by mcaseaux          #+#    #+#             */
/*   Updated: 2017/07/12 12:52:24 by mcaseaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_upletter(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strlowcase(char *str)
{
	int	i;

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
