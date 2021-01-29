/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvervier <yvervier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 11:06:58 by yvervier          #+#    #+#             */
/*   Updated: 2021/01/20 11:50:30 by yvervier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len1;
	int		len2;
	int		i;
	char	*str;

	if (!s1 && !s2)
		return (NULL);
	len1 = strlen(s1);
	len2 = strlen(s2);
	if (!(str = malloc(sizeof(char) * (len1 + len2 + 1))))
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		str[len1 + i] = s2[i];
		i++;
	}
	str[len1 + i] = '\0';
	return (str);
}
