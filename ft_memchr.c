/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kparis <kparis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 13:17:48 by kparis            #+#    #+#             */
/*   Updated: 2019/10/15 16:09:39 by kparis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t size)
{
	size_t			i;
	unsigned char	*ptr_str;
	size_t			str_len;

	str_len = ft_strlen(str);
	if (c == '\0')
		return ((char *)str + str_len);
	ptr_str = (unsigned char *)str;
	i = 0;
	while (ptr_str[i] && i < size)
	{
		if (ptr_str[i] == (unsigned char)c)
			return ((char *)str + i);
		i++;
	}
	return (0);
}
