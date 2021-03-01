/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 15:11:58 by acanterg          #+#    #+#             */
/*   Updated: 2021/02/24 19:27:26 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#import "get_next_line_bonus.h"

int		ft_has_nl(char *str)
{
	int		i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len_s1;
	int		len_s2;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen((char*)s1);
	len_s2 = ft_strlen((char*)s2);
	if (!(str = malloc((len_s1 + len_s2 + 1) * sizeof(char))))
		return (NULL);
	ft_memcpy(str, (char*)s1, len_s1);
	ft_memcpy(str + len_s1, (char*)s2, len_s2);
	str[len_s1 + len_s2] = '\0';
	free((void *)s1);
	return (str);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*dest_p;
	char	*src_p;
	size_t	i;

	if (!src && !dest)
		return (NULL);
	dest_p = dest;
	src_p = (char*)src;
	i = 0;
	while (i < n)
	{
		dest_p[i] = src_p[i];
		i++;
	}
	return (dest);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (!src || !dst)
		return (0);
	if (size == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	while (i < size - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (i < size)
		dst[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*str;

	size = ft_strlen(s) + 1;
	if (!(str = malloc(size * sizeof(char))))
		return (NULL);
	ft_strlcpy(str, s, size);
	return (str);
}
