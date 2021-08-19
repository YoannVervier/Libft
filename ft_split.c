/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvervier <yvervier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 08:17:38 by yvervier          #+#    #+#             */
/*   Updated: 2021/08/19 14:47:24 by yvervier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(char const *s, char c)
{
	int		word;
	int		i;

	word = 0;
	i = 1;
	if (s == NULL || *s == '\0')
		return (0);
	while (*s)
	{
		if (*s == c)
			i = 1;
		else if (i == 1)
		{
			word++;
			i = 0;
		}
		s++;
	}
	return (word);
}

static int	ft_word(const char *s, char c, int i)
{
	int		k;

	k = 0;
	if (s == NULL || *s == '\0')
		return (0);
	while (s[i] != '\0' && s[i] != c)
	{
		k++;
		i++;
	}
	return (k);
}

static char    **ft_free(char **str, int i)
{
    while (str[i] && i > 0)
    {
        i--;
        free(str[i]);
    }
    free(str);
    return (NULL);
}

static char    **treat(char const *s, char **dst, char c, int slen)
{
    int    a;
    int    b;
    int    d;

    a = 0;
    b = 0;
    while (s[a] && b < slen)
    {
        d = 0;
        while (s[a] == c)
            a++;
        dst[b] = (char *)malloc(sizeof(char) * (ft_word(s, c, a) + 1));
        if (dst[b] == NULL)
            return (ft_free(dst, b));
        while (s[a] && s[a] != c)
        {
            dst[b][d] = s[a];
            d++;
            a++;
        }
        dst[b][d] = '\0';
        b++;
    }
    dst[b] = 0;
    return (dst);
}

char    **ft_split(char const *s, char c)
{
    int        slen;
    char    **str;

    slen = ft_countwords(s, c);
    if (!s)
        return (NULL);
    str = malloc(sizeof(char *) * (slen + 1));
    if (str == NULL)
        return (NULL);
    return (treat(s, str, c, slen));
}
