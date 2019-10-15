/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kparis <kparis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:35:00 by kparis            #+#    #+#             */
/*   Updated: 2019/10/15 14:07:17 by kparis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_limit(long int res, char c, int sign)
{
	if ((res > 922337203685477580 || (res == 922337203685477580
		&& (c - '0') > 7)) && sign == 1)
		return (-1);
	else if ((res > 922337203685477580 || (res == 922337203685477580
		&& (c - '0') > 8)) && sign == -1)
		return (0);
	return (1);
}

int		ft_atoi(const char *str)
{
	int			i;
	int			sign;
	int			overflow;
	long int	res;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\r' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		overflow = check_limit(res, str[i], sign);
		if (overflow != 1)
			return (overflow);
		res = res * 10 + str[i++] - 48;
	}
	return (res * sign);
}
