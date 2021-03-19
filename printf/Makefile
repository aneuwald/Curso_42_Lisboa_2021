# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aneuwald <aneuwald@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/10 23:55:33 by acanterg          #+#    #+#              #
#    Updated: 2021/03/19 19:13:24 by aneuwald         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_printf.c $(wildcard srcs/*.c) $(wildcard prints/*.c)
OBJS	= $(SRCS:.c=.o)
GCC		= gcc
CFLAGS	= -Wall -Wextra -Werror
NAME	= libftprintf.a
INCLUD	= -I .

.c.o:
			$(GCC) $(CFLAGS) $(INCLUD) -c $< -o $(<:.c=.o)

all : 		$(NAME)

$(NAME) :	$(OBJS)
			ar rcs $(NAME) $(OBJS)

clean :
			rm -f $(OBJS)

t:		$(NAME)
			make a -C /printfTester
			
fclean :	clean
			rm -f $(NAME)

re :		fclean all

.PHONY: 	all clean fclean re test