/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunkim <hyunkim@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 16:57:36 by jinbkim           #+#    #+#             */
/*   Updated: 2021/02/10 06:38:37 by hyunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*data;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	if (!(data = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (NULL);
	i = -1;
	while (s1[++i])
		data[i] = s1[i];
	j = -1;
	while (s2[++j])
		data[i + j] = s2[j];
	data[i + j] = '\0';
	return (data);
}
