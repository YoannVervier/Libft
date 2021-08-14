/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvervier <yvervier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 17:36:23 by yvervier          #+#    #+#             */
/*   Updated: 2021/08/12 18:27:29 by yvervier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*n1;
	const unsigned char	*n2;

	if (s1 == s2 || n == 0)
		return (0);
	n1 = (const unsigned char *)s1;
	n2 = (const unsigned char *)s2;
	while (n--)
	{
		if (*n1 != *n2)
			return (*n1 - *n2);
		if (n)
		{
			n1++;
			n2++;
		}
	}
	return (0);
}
