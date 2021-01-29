/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvervier <yvervier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 10:37:59 by yvervier          #+#    #+#             */
/*   Updated: 2021/01/20 09:04:50 by yvervier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *tf, size_t len)
{
	unsigned int pos;
	unsigned int i;

	if (!*tf)
		return ((char*)str);
	pos = 0;
	while (str[pos] != '\0' && (size_t)pos < len)
	{
		if (str[pos] == tf[0])
		{
			i = 1;
			while (tf[i] != '\0' && str[pos + i] == tf[i] &&
					(size_t)(pos + i) < len)
				++i;
			if (tf[i] == '\0')
				return ((char*)&str[pos]);
		}
		++pos;
	}
	return (0);
}
