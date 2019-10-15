/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kparis <kparis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 12:50:38 by kparis            #+#    #+#             */
/*   Updated: 2019/10/15 15:33:21 by kparis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	size_t			i;
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;

	i = 0;
	ptr_dest = (unsigned char *)dest;
	ptr_src = (unsigned char *)src;
	if (dest == src)
		return (dest);
	if (dest < src)
	{
		while (i != size)
		{
			ptr_dest[i] = ptr_src[i];
			i++;
		}
	}
	else
		while (size > 0)
		{
			size--;
			ptr_dest[size] = ptr_src[size];
		}
	return (ptr_dest);
}
