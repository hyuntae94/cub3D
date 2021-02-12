/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunkim <hyunkim@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/02 17:15:22 by jinbkim           #+#    #+#             */
/*   Updated: 2021/02/10 06:36:57 by hyunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		check_sign(const char *str)
{
	int i;
	int sign;

	i = 0;
	while (is_space(str[i]))
		i++;
	sign = 1;
	if ((str[i] == '-'))
		sign = -1;
	if (str[i] < '0' || str[i] > '9')
		sign = 0;
	return (sign);
}

int		ft_atoi(const char *str)
{
	int		i;
	int		result;
	char	diff;
	int		sign;

	if (!*str)
		return (0);
	result = 0;
	diff = '0' - 0;
	sign = check_sign(str);
	i = 0;
	while (!ft_isdigit(str[i]))
		i++;
	while (ft_isdigit(str[i]))
		result = result * 10 + (str[i++] - diff);
	return (sign * result);
}
