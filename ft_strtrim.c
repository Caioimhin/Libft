/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kparis <kparis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 11:41:39 by kparis            #+#    #+#             */
/*   Updated: 2019/10/15 17:22:44 by kparis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*get_start(char const *s1, char const *set)
{
	int i;

	i = 0;
	while (s1[i])
	{
		if (ft_strchr((char *)set, (char)s1[i]) == 0)
			return ((char *)&s1[i]);
		i++;
	}
	return (0);
}

char	*get_end(char const *s1, char const *set)
{
	int len;

	len = ft_strlen((char *)s1);
	while (len > 0)
	{
		if (ft_strchr((char *)set, (char)s1[len]) == 0)
			return ((char *)&s1[len]);
		len--;
	}
	return (0);
}

int		get_newlen(char *ptr_start, char *ptr_end)
{
	int	i;

	i = 0;
	while (ptr_start != ptr_end)
	{
		ptr_start++;
		i++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr_start;
	char	*ptr_end;
	int		len;
	char	*str;
	int		i;

	i = 0;
	ptr_start = get_start(s1, set);
	if (ptr_start == 0)
		return (ft_strdup(""));
	ptr_end = get_end(s1, set);
	if (ptr_end == 0)
		len = ft_strlen(ptr_start);
	else
		len = get_newlen(ptr_start, ptr_end);
	if (!(str = malloc(sizeof(char) * len + 1)))
		return (0);
	while (ptr_start != ptr_end)
		str[i++] = *ptr_start++;
	str[i++] = *ptr_start++;
	str[i] = '\0';
	return (str);
}
