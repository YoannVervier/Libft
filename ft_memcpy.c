/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvervier <yvervier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 09:33:37 by yvervier          #+#    #+#             */
/*   Updated: 2021/08/12 17:59:06 by yvervier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*s;
	char	*d;

	if (!dst && !src)
		return (dst);
	s = (char *)src;
	d = (char *)dst;
	i = 0;
	while (n > i)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
