/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kparis <kparis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 17:29:10 by kparis            #+#    #+#             */
/*   Updated: 2019/10/15 15:49:48 by kparis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int val, size_t size)
{
	size_t			i;
	unsigned char	*ptr2;

	i = 0;
	ptr2 = ptr;
	while (i != size)
	{
		ptr2[i] = (unsigned char)val;
		i++;
	}
	return (ptr);
}
