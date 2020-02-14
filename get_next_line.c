/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kparis <kparis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 13:41:42 by kparis            #+#    #+#             */
/*   Updated: 2020/02/05 16:18:02 by kparis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_gnl(char **s1, char *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	str = (char*)malloc(
			sizeof(**s1) * (ft_strlen(*s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while ((*s1)[i])
	{
		str[j++] = (*s1)[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		str[j++] = s2[i];
		i++;
	}
	str[j] = 0;
	free(*s1);
	*s1 = str;
	return (str);
}

int	get_next_line3(t_struct *info, int fd)
{
	if (!(info->buf = malloc(sizeof(char) * (10 + 1))))
		return (-1);
	info->nb_read = read(fd, info->buf, 10);
	info->buf[info->nb_read] = 0;
	info->str = ft_strjoin_gnl(&info->str, info->buf);
	free(info->buf);
	info->buf = 0;
	return(0);
}

int		get_next_line2(t_struct *info, int fd, char **line)
{
	size_t	i;

	i = 0;
	while (ft_strchr(info->str, '\n') == NULL && info->nb_read != 0)
		if (get_next_line3(info, fd) == -1)
			return (-1);
	if (ft_strchr(info->str, '\n') != NULL)
	{
		while (i < ft_strlen(info->str) && info->str[i] != '\n')
			i += 1;
		*line = i == 0 ? ft_strdup("") : ft_substr(info->str, 0, i);
		info->tmp = ft_substr(info->str, i+1, ft_strlen(&info->str[i + 1]));
		free(info->str);
		info->str = ft_strdup(info->tmp);
		free(info->tmp);
		return (1);
	}
	else
	{
		*line = ft_strdup(info->str);
		free(info->str);
		info->str = 0;
		return (0);
	}
}

int		get_next_line(int fd, char **line)
{
	static t_struct	info;

	if (!line || fd < 0 || 10 < 1)
		return (-1);
	if (!info.str)
	{
		info.str = ft_strdup("");
		info.nb_read = 1;
	}
	while (info.nb_read > 0 || ft_strchr(info.str, '\n') != NULL)
		return(get_next_line2(&info, fd, line));
	*line = ft_strdup(info.str);
	free(info.str);
	free(info.buf);
	info.buf = 0;
	info.str = 0;
	return (0);
}
