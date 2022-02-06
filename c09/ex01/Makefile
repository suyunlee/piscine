# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: suylee <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/15 14:01:05 by suylee            #+#    #+#              #
#    Updated: 2020/08/15 18:59:15 by suylee           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS	= ${SRCS:.c=.o}
INCLUDE	= includes

NAME	= libft.a 

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
AR		= ar
AFLAGS	= srcv
RM		= rm -f

.c.o:
			${CC} ${CFLAGS} -I${INCLUDE}  -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${AR} ${AFLAGS} ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re .c.o
