/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kparis <kparis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 12:57:10 by kparis            #+#    #+#             */
/*   Updated: 2020/02/07 12:32:29 by kparis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		check_base(char *base)
{
	int	i;
	int	z;

	i = 0;
	z = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		z = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		while (base[z])
		{
			if (base[i] == base[z])
				return (0);
			z++;
		}
		i++;
	}
	return (1);
}

char	*return_char(char *base, int *nbr_final, int i)
{
	int		len;
	char	*str;

	len = 0;
	str = 0;
	if (!(str = malloc(sizeof(char) * (i + 1))))
		return (0);
	while (--i >= 0)
		str[len++] = base[nbr_final[i]];
	str[len] = 0;
	free(nbr_final);
	return (str);
}

char	*ft_convert_base(long long nbr, char *base)
{
	int				len;
	int				*nbr_final;
	int				i;

	i = 0;
	len = 0;
	nbr_final = 0;
	if (check_base(base))
	{
		while (base[len])
			len++;
		if (nbr != 0)
		{
			while (nbr)
			{
				nbr_final = ft_realloc_int(nbr_final, i, nbr % len);
				i++;
				nbr = nbr / len;
			}
		}
		else
			return ("0");
	}
	return (return_char(base, nbr_final, i));
}