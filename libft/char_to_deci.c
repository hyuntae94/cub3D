/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_to_deci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunkim <hyunkim@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/02 16:58:23 by jinbkim           #+#    #+#             */
/*   Updated: 2021/02/10 06:36:26 by hyunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		char_to_deci(char *s, int idx)
{
	int result;

	result = 0;
	while (ft_isdigit(s[idx]))
		result = (result * 10) + (s[idx++] - '0');
	return (result);
}
