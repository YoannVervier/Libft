/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvervier <yvervier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 09:10:40 by yvervier          #+#    #+#             */
/*   Updated: 2021/01/21 10:16:23 by yvervier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		intlen(long nb)
{
	int len;

	len = 0;
	if (nb < 0)
	{
		nb *= -1;
		len++;
	}
	while (nb >= 10)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	long	m;
	char	*s;

	m = n;
	len = intlen(m);
	if (!(s = malloc(sizeof(s) * (len + 1))))
		return (NULL);
	s[len + 1] = '\0';
	if (m < 0)
	{
		s[0] = '-';
		m *= -1;
	}
	while (m >= 10)
	{
		s[len] = m % 10 + 48;
		m /= 10;
		len--;
	}
	s[len] = m + 48;
	return (s);
}
