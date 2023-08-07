# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pecampos <pecampos@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/07 11:03:12 by omontero          #+#    #+#              #
#    Updated: 2022/06/10 14:30:29 by pecampos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_hexa.c	ft_itoa.c ft_printf.c ft_uitoa.c ft_void.c ft_selection.c ft_selection2.c

OBJS = $(SRC:.c=.o)

RM = rm -f

CC = gcc

CFLAGS = -Wall -Werror -Wextra -I.

NAME = libftprintf.a

all:			$(NAME)

$(NAME):		
				$(CC) -c $(CFLAGS) $(SRC)
				ar rcs $(NAME) $(OBJS)

bonus:			
				$(CC) -c $(CFLAGS) $(SRC)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re bonus
	