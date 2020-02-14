/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc_int.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kparis <kparis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 14:50:21 by kparis            #+#    #+#             */
/*   Updated: 2020/02/07 12:35:07 by kparis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		*ft_realloc_int(int *tab, int size, int nbr)
{
	int *final_tab;
	int i;

	i = 0;
	final_tab = malloc(sizeof(int) * (size + 1));
	while (i < size)
	{
		final_tab[i] = tab[i];
		i += 1;
	}
	final_tab[i] = nbr;
	if (size)
		free(tab);
	return (final_tab);
}