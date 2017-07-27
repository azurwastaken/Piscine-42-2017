# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcaseaux <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/21 16:05:28 by mcaseaux          #+#    #+#              #
#    Updated: 2017/07/25 12:58:43 by mcaseaux         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft\_cat

SRC = ft_cat.c lib_disp.c

OBJECT = lib_disp.o ft_cat.o

$(NAME): all

BIN:
	gcc -Wall -Wextra -Werror -c $(SRC)

all: BIN
	gcc -Wall -Wextra -Werror -o $(NAME) $(OBJECT)

clean:
	/bin/rm -f $(OBJECT)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
