/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaseaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 09:11:04 by mcaseaux          #+#    #+#             */
/*   Updated: 2017/07/11 17:29:32 by mcaseaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_strcat(char *dest, char *src)
{
	int		i[2];
	char	out[1 + ft_strlen(dest) + ft_strlen(src)];

	i[0] = 0;
	while (i[0] < 1 + ft_strlen(dest) + ft_strlen(src))
	{
		out[i[0]] = 0;
		i[0]++;
	}
	i[1] = 0;
	while (dest[i[1]] != '\0')
	{
		out[i[1]] = dest[i[1]];
		i[1]++;
	}
	i[0] = 0;
	while (src[i[0]] != '\0')
	{
		out[i[1]] = src[i[0]];
		i[1]++;
		i[0]++;
	}
	out[i[1]] = '\0';
	dest = out;
	return (dest);
}
