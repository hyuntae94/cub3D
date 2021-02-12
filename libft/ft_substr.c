/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunkim <hyunkim@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 17:05:25 by jinbkim           #+#    #+#             */
/*   Updated: 2021/02/10 06:39:13 by hyunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*data;
	size_t	i;

	if (!s)
		return (NULL);
	if (!(data = (char *)malloc(len + 1)) || ft_strlen(s) < (int)start)
		return (NULL);
	i = -1;
	while (++i < len)
		data[i] = s[start++];
	data[i] = '\0';
	return (data);
}
