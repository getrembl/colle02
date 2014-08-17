# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbran <sbran@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/08/16 16:03:40 by sbran             #+#    #+#              #
#    Updated: 2014/08/17 20:05:52 by getrembl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =			colle-2

CPATH =			./srcs/

SRCS =			main.c \
					colle00.c \
					colle01.c \
					colle02.c \
					colle03.c \
					colle04.c \
					lib.c \
					lib2.c

OBJS = 			$(SRCS:.c=.o)

CC =			gcc

CFLAGS =		-Wall -Wextra -Werror

RM =			rm -rf

all:			$(NAME)

$(NAME):		$(OBJS)
					$(CC) $(CFLAGS) -o $(NAME) $(OBJS) -I ./includes

%.o:			$(CPATH)%.c
					$(CC) $(CFLAGS) -c $< -I ./includes
clean:
					$(RM) $(OBJS)

fclean: 		clean
					$(RM) $(NAME)

re: 			fclean all
