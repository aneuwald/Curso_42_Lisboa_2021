/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 12:18:02 by acanterg          #+#    #+#             */
/*   Updated: 2021/02/25 14:55:03 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count_words_split(char const *str, char c)
{
	int	counter;
	int looking_words;

	counter = 0;
	looking_words = 1;
	while (*str)
	{
		if (*str == c)
			looking_words = 1;
		else if (*str != c && looking_words)
		{
			looking_words = 0;
			counter++;
		}
		str++;
	}
	return (counter);
}

static int		get_end_index(char const *str, char c)
{
	int		len;

	len = 0;
	while (str[len] && str[len] != c)
		len++;
	return (len);
}

char			**ft_split(char const *s, char c)
{
	char	**matrix;
	int		count_words;
	int		w;
	size_t	end;

	if (!s)
		return (NULL);
	count_words = ft_count_words_split(s, c) + 1;
	if (!(matrix = malloc(sizeof(char *) * count_words)))
		return (NULL);
	w = 0;
	while (w < count_words - 1)
	{
		if (*s == c)
			s++;
		else
		{
			end = get_end_index(s, c);
			matrix[w++] = ft_substr(s, 0, end);
			s += end;
		}
	}
	matrix[w] = 0;
	return (matrix);
}

#include <stdio.h>

int main()
{
	char	**test = ft_split("", '\0');
	printf("t: %s", *test);
	}