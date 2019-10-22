/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kparis <kparis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 13:17:48 by kparis            #+#    #+#             */
/*   Updated: 2019/10/21 14:09:51 by kparis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t size)
{
	char	*ptr;
	char	*m;
	size_t	i;

	ptr = 0;
	m = (char*)str;
	i = 0;
	while (i < size)
	{
		if (m[i] == ((char)c))
		{
			ptr = &m[i];
			return (ptr);
		}
		i++;
	}
	return (0);
}
