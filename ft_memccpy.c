/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kparis <kparis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 11:23:46 by kparis            #+#    #+#             */
/*   Updated: 2019/10/15 14:56:26 by kparis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t size)
{
	size_t			i;
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;

	i = 0;
	ptr_dest = (unsigned char *)dest;
	ptr_src = (unsigned char *)src;
	while (i < size && ptr_src[i] != (unsigned char)c)
	{
		ptr_dest[i] = ptr_src[i];
		i++;
	}
	if (ptr_src[i] == (unsigned char)c)
	{
		ptr_dest[i] = ptr_src[i];
		return (&ptr_dest[i + 1]);
	}
	return (0);
}
