/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvervier <yvervier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 17:36:23 by yvervier          #+#    #+#             */
/*   Updated: 2021/01/14 15:25:12 by yvervier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*n1;
	unsigned char	*n2;

	n1 = (unsigned char *)s1;
	n2 = (unsigned char *)s2;
	i = 0;
	while (n1[i] && n > i)
	{
		if (n1[i] != n2[i])
			return (n1[i] - n2[i]);
		i++;
	}
	if (n2[i] == '\0' || i == n)
		return (0);
	else
		return (n1[i] - n2[i]);
}
