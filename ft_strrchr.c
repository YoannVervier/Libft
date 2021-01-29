/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvervier <yvervier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 08:59:04 by yvervier          #+#    #+#             */
/*   Updated: 2021/01/14 15:18:17 by yvervier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		i;

	str = (char *)s;
	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	if (*str == '\0' && c == '\0')
		return (str);
	while (i >= 0)
	{
		if (*str == c)
			return (str);
		str--;
		i--;
	}
	return (0);
}
