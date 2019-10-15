/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kparis <kparis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 11:49:21 by kparis            #+#    #+#             */
/*   Updated: 2019/10/14 11:37:51 by kparis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			get_nb(char const *s, char c)
{
	int		i;
	int		nb;

	i = 0;
	nb = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if ((s[i] == c && s[i + 1] != c) || (s[i] != c && s[i + 1] == '\0'))
			nb++;
		i++;
	}
	return (nb);
}

int			get_len(char *s, char c, int i)
{
	int len;

	len = 0;
	while (s[i] && s[i] != c)
	{
		i++;
		len++;
	}
	return (len);
}

char		*create_str(char *s, char c, int i)
{
	char	*dest;
	int		j;

	j = 0;
	if (!(dest = malloc(sizeof(char) * get_len(s, c, i) + 1)))
		return (0);
	while (s[i] && s[i] != c)
	{
		dest[j] = s[i];
		i++;
		j++;
	}
	dest[j] = 0;
	return (dest);
}

char		**ft_split(char const *s, char c)
{
	int		nb_tab;
	char	**tab;
	int		i;
	int		j;

	i = 0;
	j = 0;
	nb_tab = get_nb((char *)s, c);
	if (!(tab = malloc(sizeof(char*) * (nb_tab + 1))))
		return (0);
	while (s[i] && j < nb_tab)
	{
		while (s[i] == c)
			i++;
		tab[j] = create_str((char *)s, c, i);
		j++;
		i++;
		while (s[i] && s[i] != c)
			i++;
	}
	tab[j] = NULL;
	return (tab);
}
