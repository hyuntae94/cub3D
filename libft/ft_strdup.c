/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunkim <hyunkim@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 16:48:38 by jinbkim           #+#    #+#             */
/*   Updated: 2021/02/10 06:38:26 by hyunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*data;
	int		i;

	data = (char *)malloc(ft_strlen(s) + 2);
	if (data == NULL)
		return (NULL);
	i = -1;
	while (s[++i])
		data[i] = s[i];
	data[i] = '\0';
	data[i + 1] = '\0';
	return (data);
}
