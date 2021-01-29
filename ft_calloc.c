/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvervier <yvervier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 08:39:12 by yvervier          #+#    #+#             */
/*   Updated: 2021/01/14 15:39:55 by yvervier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;
	size_t	i;

	if (!(result = malloc(count * size)))
		return (NULL);
	i = 0;
	while (i < count)
	{
		((unsigned char *)result)[i] = 0;
		i++;
	}
	return (result);
}
