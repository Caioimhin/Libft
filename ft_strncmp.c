/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kparis <kparis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 17:26:03 by kparis            #+#    #+#             */
/*   Updated: 2019/10/15 16:13:07 by kparis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t i;

	i = 0;
	if (n == 0)
		return (0);
	while (((unsigned char *)str1)[i] == ((unsigned char *)str2)[i] &&
		str1[i] && i < n)
		i++;
	if (i == n)
	{
		return (((unsigned char *)str1)[i - 1] -
			((unsigned char *)str2)[i - 1]);
	}
	return (((unsigned char *)str1)[i] - ((unsigned char *)str2)[i]);
}
