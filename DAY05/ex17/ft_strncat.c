/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaseaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 09:54:51 by mcaseaux          #+#    #+#             */
/*   Updated: 2017/07/12 12:55:46 by mcaseaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, int nb)
{
	int		i[2];
	char	out[1 + ft_strlen(dest) + nb];

	i[0] = 0;
	while (i[0] < 1 + ft_strlen(dest) + nb)
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
	while (src[i[0]] != '\0' && i[0] <= nb - 1)
	{
		out[i[1]] = src[i[0]];
		i[1]++;
		i[0]++;
	}
	out[i[1]] = '\0';
	dest = out;
	return (dest);
}
