/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kparis <kparis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 13:16:49 by kparis            #+#    #+#             */
/*   Updated: 2019/10/15 16:18:04 by kparis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*find_sub(char *s1, const char *s2, size_t size)
{
	size_t		i;
	size_t		j;
	size_t		k;
	char		*sub;

	i = 0;
	j = 0;
	while (s1[i] && i < size)
	{
		k = i;
		sub = &s1[i];
		while ((s2[j++] == s1[i]) && i <= size)
		{
			if (s1[i] == 0 || s2[j] == 0)
				return (sub);
			i++;
		}
		j = 0;
		i = k;
		i++;
	}
	return (0);
}

char	*ft_strnstr(const char *s1, const char *s2, size_t size)
{
	size_t		s2_len;
	char		*ptr;
	char		*s1_bis;

	s1_bis = (char *)s1;
	s2_len = ft_strlen(s2);
	if (s2_len == 0)
		return (s1_bis);
	ptr = find_sub(s1_bis, s2, size);
	return (ptr);
}
