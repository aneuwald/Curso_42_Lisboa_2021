/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 15:10:44 by acanterg          #+#    #+#             */
/*   Updated: 2021/02/24 19:27:23 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#import "get_next_line_bonus.h"

int		ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_newstr(size_t size)
{
	char	*str;

	if (!(str = malloc((size + 1) * sizeof(char))))
		return (NULL);
	str[size] = '\0';
	return (str);
}

char	*ft_get_line(char *str)
{
	char	*result;
	int		i;

	if (!str)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (!(result = malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
	{
		result[i] = str[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

char	*ft_new_saved(char *str)
{
	char	*result;
	int		i;
	int		j;

	if (!str)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (!str[i])
	{
		free(str);
		return (NULL);
	}
	if (!(result = malloc(sizeof(char) * (ft_strlen(str) - i + 1))))
		return (NULL);
	i++;
	j = 0;
	while (str[i])
		result[j++] = str[i++];
	result[j] = '\0';
	free(str);
	return (result);
}

int		get_next_line(int fd, char **line)
{
	static char		*saved[4096];
	char			buff[BUFFER_SIZE + 1];
	int				r;

	if (fd < 0 || !line || BUFFER_SIZE <= 0)
		return (-1);
	if (!saved[fd] && !(saved[fd] = ft_newstr(0)))
		return (-1);
	r = 1;
	while (!ft_has_nl(saved[fd]) && r != 0)
	{
		if ((r = read(fd, buff, BUFFER_SIZE)) == -1)
		{
			free(saved[fd]);
			return (-1);
		}
		buff[r] = '\0';
		saved[fd] = ft_strjoin(saved[fd], buff);
	}
	*line = ft_get_line(saved[fd]);
	saved[fd] = ft_new_saved(saved[fd]);
	return (r == 0 ? 0 : 1);
}
