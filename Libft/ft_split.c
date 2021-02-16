/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acantergi@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 12:18:02 by acanterg          #+#    #+#             */
/*   Updated: 2021/02/15 12:18:02 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int  is_in_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

static int	ft_count_words_split(char *str, char *charset)
{
	int	counter;
	int looking_words;

	counter = 0;
	looking_words = 1;
	while (*str)
	{
		if (is_in_charset(*str, charset))
			looking_words = 1;
		else if (!is_in_charset(*str, charset) && looking_words)
		{
			looking_words = 0;
			counter++;
		}
		str++;
	}
	return (counter);
}

static char *get_next_word(char *str, int *pos, char *charset)
{
	int		i;
	char	*word;

	while (str[*pos] && !is_in_charset(str[*pos], charset))
		*pos += 1;
	i = 0;
	if (!(word = malloc(sizeof(char) * *pos + 1))) 
        return NULL;
	while (i < *pos)
	{
		word[i] = *str;
		i++;
		str++;
	}
	word[i] = '\0';
	return (word);
}

char        **ft_split(char *str, char *charset)
{
	char	**matrix;
	int		size;
	int		i;
	int		pos;

	pos = 0;
	size = ft_count_words_split(str, charset) + 1;
	if (!(matrix = malloc(sizeof(char *) * size)))
		return (0);
	i = 0;
	while (i < size - 1)
	{
		if (is_in_charset(*str, charset))
			str++;
		else
		{
			matrix[i] = get_next_word(str, &pos, charset);
			str += pos;
			pos = 0;
			i++;
		}
	}
	matrix[i] = 0;
	return (matrix);
}