# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/19 19:18:55 by acanterg          #+#    #+#              #
#    Updated: 2021/03/23 17:08:01 by acanterg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



SRCS	= $(wildcard *.c) $(wildcard srcs/*.c) $(wildcard prints/*.c)
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

bonus :		all

fclean :	clean
			rm -f $(NAME)

re :		fclean all

.PHONY: 	all clean fclean re