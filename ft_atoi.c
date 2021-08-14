/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvervier <yvervier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 10:59:12 by yvervier          #+#    #+#             */
/*   Updated: 2021/08/12 14:06:50 by yvervier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_signe(const char *str)
{
	int	a;
	int	signe;

	a = 0;
	signe = 1;
	while ((str[a] <= 13 && str[a] >= 9) || str[a] == 32)
		a++;
	while (str[a] == 45 || str[a] == 43)
	{
		if (str[a] == 45)
			signe *= -1;
		a++;
	}
	return (signe);
}

int	ft_atoi(const char *str)
{
	int	a;
	int	signe;
	int	result;

	result = 0;
	a = 0;
	signe = ft_signe(str);
	while ((str[a] <= 13 && str[a] >= 9) || str[a] == 32)
		a++;
	if (str[a] == 45 || str[a] == 43)
		a++;
	while (str[a] <= 57 && str[a] >= 48)
	{
		if (result == 0)
			result = str[a] - 48;
		else
		{
			result *= 10;
			result += str[a] - 48;
		}
		a++;
	}
	return (result * signe);
}
