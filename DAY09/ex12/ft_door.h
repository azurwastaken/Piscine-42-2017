/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaseaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 13:48:22 by mcaseaux          #+#    #+#             */
/*   Updated: 2017/07/14 15:26:28 by mcaseaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define FT_DOOR_H
# include <string.h>
# define OPEN 1
# define CLOSE 0
# define TRUE 1
# define FALSE 0

typedef int	t_bool;
typedef struct		s_door
{
	t_bool	state;
}					t_door;

#endif
