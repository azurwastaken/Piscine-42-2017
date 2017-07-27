/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaseaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 16:01:31 by mcaseaux          #+#    #+#             */
/*   Updated: 2017/07/20 09:53:52 by mcaseaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int res;

	i = 0;
	res = 0;
	while (tab[i])
	{
		if (f(tab[i]))
			res++;
		i++;
	}
	return (res);
}
