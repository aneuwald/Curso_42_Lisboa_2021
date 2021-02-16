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

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	ft_memmove(void);
void	*ft_memchr(const void *s, int c, size_t n);
void	ft_memcmp(void);
int		ft_strlen(const char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*ft_strchr(const char *s, int c);
void	ft_strrchr(void);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
void	ft_strncmp(void);
int		ft_atoi(char *str);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isspace(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
char	ft_toupper(char c);
char	ft_tolower(char c);
void	*ft_calloc(size_t nmemb, size_t size);
void	ft_strd(void);
void	ft_substr(void);
char	*ft_strjoin(char const *s1, char const *s2);
void	ft_strtrim(void);
char	**ft_split(char *str, char *charset);
char	*ft_itoa(int n);
void	ft_strmapi(void);
void	ft_putchar_fd(void);
void	ft_putstr_fd(void);
void	ft_putendl_fd(void);
void	ft_putnbr_fd(void);


#endif
