/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kparis <kparis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 10:42:39 by kparis            #+#    #+#             */
/*   Updated: 2019/10/15 14:08:24 by kparis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *ptr, size_t size)
{
	size_t			i;
	unsigned char	*ptr2;

	i = 0;
	ptr2 = ptr;
	while (i != size)
	{
		ptr2[i] = 0;
		i++;
	}
	return (ptr2);
}
