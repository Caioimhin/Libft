/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc_char.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kparis <kparis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/16 16:39:09 by kparis            #+#    #+#             */
/*   Updated: 2020/03/16 16:51:18 by kparis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_realloc_char(char *str, char c)
{
	char	*new_str;
	int		i;

	i = 0;
	if (!(new_str = malloc(sizeof(char) * (ft_strlen(str) + 2))))
		return (0);
	while (str[i])
	{
		new_str[i] = str[i];
		i++;
	}
	new_str[i++] = c;
	new_str[i] = 0;
	free(str);
	return (new_str);
}
