# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/10 23:55:33 by acanterg          #+#    #+#              #
#    Updated: 2021/02/17 18:02:51 by acanterg         ###   ########.fr        #
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

${NAME} :	${OBJS} ${OBJS_2}
			ar rc ${NAME} ${OBJS} ${OBJS_2}
			ranlib ${NAME}

bonus :		${NAME} ${OBJS} ${OBJS_2} ${OBJS_BONUS}
			ar rc ${NAME} ${OBJS} ${OBJS_2} ${OBJS_BONUS}
			ranlib ${NAME}

clean :
			rm -f ${OBJS} ${OBJS_2} ${OBJS_BONUS}

fclean :	clean
			rm -f ${NAME}
			rm -f test.out

re :		fclean all

test :		${NAME}
			${GCC} ${CFLAGS} -o test.out test.c libft.a
			./test.out

.PHONY: 	all clean fclean re test