# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcaseaux <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/21 16:05:28 by mcaseaux          #+#    #+#              #
#    Updated: 2017/07/25 15:41:07 by mcaseaux         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = display_file.c lib_disp.c

OBJECT = display_file.o lib_disp.o

$(NAME): all

BIN:
	gcc -Wall -Wextra -Werror -c $(SRC)

all: BIN
	gcc -Wall -Wextra -Werror -o $(NAME) $(SRC)

clean:
	/bin/rm -f $(OBJECT)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
