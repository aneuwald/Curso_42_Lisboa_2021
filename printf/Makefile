# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/19 19:18:55 by acanterg          #+#    #+#              #
#    Updated: 2021/03/25 10:59:50 by acanterg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



SRCS	=   ft_handlers.c \
			ft_printf.c \
			prints/ft_print_c.c \
			prints/ft_print_di.c \
			prints/ft_print_ls.c \
			prints/ft_print_n.c \
			prints/ft_print_p.c \
			prints/ft_print_porc.c \
			prints/ft_print_s.c \
			prints/ft_print_spaces.c \
			prints/ft_print_u.c \
			prints/ft_print_x.c \
			prints/ft_print_zeros.c \
			srcs/ft_putchar.c \
			srcs/ft_putnbr.c \
			srcs/ft_putnbr_base.c \
			srcs/ft_putstr.c \
			srcs/ft_putwchar.c \
			srcs/ft_putwstr.c \
			srcs/ft_strlcpy.c \
			srcs/ft_strlen.c \
			srcs/ft_wcharlen.c 

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

.PHONY: 	all clean fclean re bonus