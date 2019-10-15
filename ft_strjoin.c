/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kparis <kparis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 10:55:49 by kparis            #+#    #+#             */
/*   Updated: 2019/10/11 11:19:48 by kparis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		str1_len;
	int		str2_len;
	char	*str;
	int		i;

	str1_len = ft_strlen((char *)s1);
	str2_len = ft_strlen((char *)s2);
	if (!(str = malloc(sizeof(char) * (str1_len + str2_len) + 1)))
		return (0);
	i = 0;
	str1_len = 0;
	str2_len = 0;
	while (s1[str1_len])
		str[i++] = s1[str1_len++];
	while (s2[str2_len])
		str[i++] = s2[str2_len++];
	str[i] = 0;
	return (str);
}
