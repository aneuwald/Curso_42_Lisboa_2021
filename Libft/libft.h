/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acantergi@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 21:48:04 by acanterg          #+#    #+#             */
/*   Updated: 2021/02/10 21:48:04 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <ctype.h>

void    ft_putchar(char c);
void    ft_putstr(char *str);
void    *ft_memset(void *s, int c, size_t n);
void    ft_bzero(void *s, size_t n);
void    ft_memcpy(void);
void    ft_memccpy(void);
void    ft_memmove(void);
void    ft_memchr(void);
void    ft_memcmp(void);
int     ft_strlen(char *str);
void    ft_strlcpy(void);
void    ft_strlcat(void);
void    ft_strchr(void);
void    ft_strrchr(void);
void    ft_strnstr(void);
void    ft_strncmp(void);
int     ft_atoi(char *str);
int     ft_isalpha(int c);
int     ft_isdigit(int c);
int     ft_isspace(int c);
int     ft_isalnum(int c);
int     ft_isascii(int c);
int     ft_isprint(int c);
char    ft_toupper(char c);
char    ft_tolower(char c);
void    *ft_calloc(size_t nmemb, size_t size);
void    ft_strd(void);
void    ft_substr(void);
void    ft_strjoin(void);
void    ft_strtrim(void);
void    ft_split(void);
char    *ft_itoa(int n);
void    ft_strmapi(void);
void    ft_putchar_fd(void);
void    ft_putstr_fd(void);
void    ft_putendl_fd(void);
void    ft_putnbr_fd(void);


#endif
