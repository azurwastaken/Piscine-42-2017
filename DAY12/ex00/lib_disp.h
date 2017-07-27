/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_disp.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaseaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 13:22:53 by mcaseaux          #+#    #+#             */
/*   Updated: 2017/07/23 15:54:12 by mcaseaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_DISP_H
# define LIB_DISP_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>

# define BUF_SIZE 4096
# define OUT_ERROR 2
# define STD_OUT 1

void	ft_putstr_new(int output, char *str);
void	ft_display_file(char *path);

#endif
