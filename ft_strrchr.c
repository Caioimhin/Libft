/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kparis <kparis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 16:09:00 by kparis            #+#    #+#             */
/*   Updated: 2019/10/15 16:23:35 by kparis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*str2;

	str2 = (char *)str;
	i = ft_strlen(str2);
	while (i && str2[i] != c)
		i--;
	if (str2[i] == c)
		return (&str2[i]);
	return (0);
}
