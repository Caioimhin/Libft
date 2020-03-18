/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_str_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kparis <kparis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/18 23:10:50 by kparis            #+#    #+#             */
/*   Updated: 2020/03/18 23:37:13 by kparis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_str_tab(char **tab, int size)
{
	int i;

	i = 0;
	if (size == 0)
		return;
	while (i < size)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}