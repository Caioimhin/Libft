/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kparis <kparis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 11:54:10 by kparis            #+#    #+#             */
/*   Updated: 2019/10/15 17:20:12 by kparis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_rev(char *tab)
{
	int		len;
	int		i;
	char	*tab2;

	len = ft_strlen(tab);
	if (!(tab2 = malloc(sizeof(char) * len + 1)))
		return (0);
	i = 0;
	while (len)
	{
		tab2[i++] = tab[len - 1];
		len--;
	}
	tab2[i] = 0;
	return (tab2);
}

char	*iszero(char *tab)
{
	if (!(tab = malloc(sizeof(char) * 2)))
		return (0);
	tab[0] = '0';
	tab[1] = 0;
	return (tab);
}

int		get_intlen(int n)
{
	int	len;

	len = 0;
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*itoarev(char *tab, int len, int n, int sign)
{
	int i;

	i = 0;
	while (i < len)
	{
		tab[i++] = (n % 10) + '0';
		n = n / 10;
		if (n == 0 && sign == 1)
			tab[i++] = '-';
	}
	tab[i] = 0;
	return (tab);
}

char	*ft_itoa(int n)
{
	char	*tab;
	int		sign;
	int		len;

	sign = 0;
	tab = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (iszero(tab));
	if (n < 0)
	{
		sign = 1;
		n = n * -1;
	}
	len = get_intlen(n);
	if (!(tab = malloc(sizeof(char) * (len + sign + 1))))
		return (0);
	tab = itoarev(tab, len, n, sign);
	tab = ft_rev(tab);
	return (tab);
}
