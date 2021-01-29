/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvervier <yvervier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 08:17:38 by yvervier          #+#    #+#             */
/*   Updated: 2021/01/21 09:10:07 by yvervier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_countwords(char const *s, char c)
{
	int		word;
	int		i;

	word = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
			word++;
		i++;
	}
	if (s[0] != '\0')
		word++;
	return (word);
}

static char		*ft_word(const char *s, char c, int *i)
{
	char	*str;
	int		k;

	if (!(str = (char *)malloc(sizeof(str) * (ft_strlen(s)))))
		return (NULL);
	k = 0;
	while (s[*i] != c && s[*i])
	{
		str[k] = s[*i];
		k++;
		*i += 1;
	}
	str[k] = '\0';
	while (s[*i] == c && s[*i])
		*i += 1;
	return (str);
}

char			**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		nbwords;

	if (!s || !c)
		return (NULL);
	nbwords = ft_countwords(s, c);
	if (!(tab = malloc(sizeof(tab) * (nbwords + 22))))
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] == c && s[i])
		i++;
	while (j < nbwords && s[i])
	{
		tab[j] = ft_word(s, c, &i);
		j++;
	}
	tab[j] = NULL;
	return (tab);
}
