/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunkim <hyunkim@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 16:32:46 by jinbkim           #+#    #+#             */
/*   Updated: 2021/02/10 06:37:09 by hyunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ns;
	size_t			i;

	ns = (unsigned char *)s;
	i = -1;
	while (++i < n)
		ns[i] = 0;
	s = ns;
}
