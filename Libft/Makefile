# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acanterg <acantergi@student.42.fr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/10 23:55:33 by acanterg          #+#    #+#              #
#    Updated: 2021/02/10 23:55:33 by acanterg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_putchar.c \
			ft_putstr.c \
			ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memccpy.c \
			ft_memmove.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_strlen.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strnstr.c \
			ft_strncmp.c \
			ft_atoi.c \
			ft_isalpha.c \
			ft_isdigit.c \
			ft_isspace.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_calloc.c \
			ft_strdup.c \
			ft_itoa.c #temporary#

SRCS_2	=	ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_split.c \
			ft_itoa.c \
			ft_strmapi.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c

OBJS	= ${SRCS:.c=.o}
OBJS_2	= ${SRCS_2:.c=.o}
GCC		= gcc
CFLAGS	= -Wall -Wextra -Werror
NAME	= libft.a

.c.o:
			${GCC} ${CFLAGS} -c $< -o ${<:.c=.o}

all : 		${NAME}

${NAME} :	${OBJS}
			ar rc ${NAME} ${OBJS}
			ranlib ${NAME}

clean :
			del ${OBJS}

fclean :	clean
			del ${NAME}

re :		fclean all

test :		${NAME}
			${GCC} ${CFLAGS} -o test test.c libft.a
			test.exe

.PHONY: 	all clean fclean re test