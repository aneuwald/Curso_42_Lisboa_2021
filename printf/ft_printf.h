/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 21:48:04 by acanterg          #+#    #+#             */
/*   Updated: 2021/03/11 18:23:57 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdint.h>
# include <limits.h>

typedef struct		s_obj
{
	char		*str;
	int			printed;
	int			index;
	va_list		vargs;
	int			width;
	int			precision;
	int			zero;
	int			dot;
	int			minus;
	int			space;
	int			hastag;
	int			plus;
}					t_obj;

int		ft_printf(const char *str, ...);
void	ft_print_c(t_obj *obj);
void	ft_print_s(t_obj *obj);
void	ft_print_di(t_obj *obj);
void	ft_print_p(t_obj *obj);
void	ft_print_u(t_obj *obj);
void	ft_print_x(t_obj *obj);
void	ft_print_n(t_obj *obj);
void	ft_print_extra(t_obj *obj, int len);
void	ft_putchar(char c, t_obj *obj);
char	*ft_strdup(char *s);
size_t	ft_strlcpy(char *dst, char *src, size_t size);
void	ft_putnbr(int64_t n, t_obj *obj);
int		ft_strlen(char *str);
void	ft_putstr(char *str, t_obj *obj);
void	ft_putnbr_base(int64_t nbr, char *base, t_obj *obj);

#endif
