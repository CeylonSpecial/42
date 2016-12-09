/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnyder <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 12:26:43 by csnyder           #+#    #+#             */
/*   Updated: 2016/12/06 12:42:33 by csnyder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	output;

	sign = 1;
	i = 0;
	result = 0;
	while (str[i] && (str[i] == '\n' || str[i] == '\t'
			|| str[i] == '\r' || str[i] == '\v'
			|| str[i] == ' ' || str[i] == '\f'))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{	
		output = (output * 10) + (str[i] - '0');
		i++;
	}
	return (sign * output);
}
