# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pecampos <pecampos@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/07 11:03:12 by pecampos          #+#    #+#              #
#    Updated: 2023/08/07 11:46:06 by pecampos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = servidor.a

NAMEC = cliente.a

NAMEBONUS = servidor_bonus.a

NAMECBONUS = cliente_bonus.a

SRCC = cliente.c

SRC = servidor.c

OBJ = $(SRC:.c=.o)

OBJ2 = $(SRCC:.c=.o)

RM = rm -f

CC = gcc

FLAGS = -Wall -Werror -Wextra

INCLUDE = -lglfw -L /Users/$$USER/.brew/opt/glfw/lib

LIBFT = libft/libft.a

PRINT = printf/libftprintf.a

all:			$(NAME)
				cd libft && make all
				cd printf && make all
				$(CC) $(FLAGS) servidor.c $(NAME) $(LIBFT) $(PRINT) $(INCLUDE) -o servidor
				$(CC) $(FLAGS) cliente.c $(NAMEC) $(LIBFT) $(PRINT) $(INCLUDE) -o cliente
				$(CC) $(FLAGS) cliente_bonus.c $(NAMECBONUS) $(LIBFT) $(PRINT) $(INCLUDE) -o cliente_bonus
				$(CC) $(FLAGS) servidor_bonus.c $(NAMEBONUS) $(LIBFT) $(PRINT) $(INCLUDE) -o servidor_bonus
				$(RM) $(OBJ) $(OBJ2) $(NAME) $(NAMEC) $(NAMECBONUS) $(NAMEBONUS)
				
$(NAME):  		$(OBJ)
				$(CC) $(FLAGS) -c $(SRC)
				ar rcs $(NAME) $(OBJ)
				$(CC) $(FLAGS) -c $(SRCC)
				ar rcs $(NAMEC) $(OBJ)
				$(CC) $(FLAGS) -c $(SRC)
				ar rcs $(NAMECBONUS) $(OBJ)
				$(CC) $(FLAGS) -c $(SRC)
				ar rcs $(NAMEBONUS) $(OBJ)

clean:
				$(RM) $(OBJ) $(OBJ2) 

fclean:			clean
				$(RM) $(NAME) servidor
				$(RM) $(NAMEC) cliente
				$(RM) cliente_bonus
				$(RM) servidor_bonus
				cd libft && make fclean
				cd printf && make fclean

exe: all
	@./$(NAME)
	
re:				fclean $(NAME)
	
run:
		./servidor