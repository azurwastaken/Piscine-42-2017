/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaseaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 23:17:49 by mcaseaux          #+#    #+#             */
/*   Updated: 2017/07/10 12:39:20 by mcaseaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_lowletter(char c)
{
	if (c >= 'a' && c <= 'z')
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

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (i < ft_strlen(str))
	{
		if (is_lowletter(str[i]) == 1)
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
