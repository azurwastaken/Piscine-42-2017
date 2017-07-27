/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaseaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 20:38:44 by mcaseaux          #+#    #+#             */
/*   Updated: 2017/07/08 15:31:48 by mcaseaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		i;
	int		rvrs;
	char	tmp;

	i = 0;
	rvrs = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	i--;
	while (rvrs < i)
	{
		tmp = str[rvrs];
		str[rvrs] = str[i];
		str[i] = tmp;
		i--;
		rvrs++;
	}
	return (str);
}
