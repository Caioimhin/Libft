/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kparis <kparis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 17:52:30 by kparis            #+#    #+#             */
/*   Updated: 2019/10/15 16:06:05 by kparis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int		i;
	unsigned int		src_len;
	unsigned int		new_len;

	i = 0;
	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	if (src_len >= size)
		new_len = size - 1;
	else
		new_len = src_len;
	while (i < new_len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[new_len] = '\0';
	return (src_len);
}
