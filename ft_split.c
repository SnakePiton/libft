/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bv10 <bv10@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:46:18 by bv10              #+#    #+#             */
/*   Updated: 2024/10/30 19:46:46 by bv10             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(char const *str, char c)
{
	int	i;
	int	count;
	int	i1;

	i = 0;
	i1 = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != c && i1 != 1)
		{
			count++;
			i1 = 1;
		}
		if (str[i] == c && i1 == 1)
			i1 = 0;
		i++;
	}
	return (count);
}

char	*ft_make(char const *str, int c)
{
	char	*d;
	int		i;

	d = (char *) malloc(sizeof(char) * c + 1);
	if (!d)
		return (NULL);
	i = 0;
	while (i < c)
	{
		d[i] = str[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}

char	**ft_clone(char const *s, char c, int len)
{
	int		i;
	int		j;
	int		i1;
	char	**d;

	i = 0;
	j = 0;
	i1 = 0;
	d = (char **) malloc (sizeof(char *) * (len + 1));
	if (!d)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		while (s[i + j] != c && s[i + j])
			j++;
		if (s[i])
			d[i1++] = ft_make((char *) s + i, j);
		i += j;
		j = 0;
	}
	d[i1] = '\0';
	return (d);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		len;

	if (!s)
		return (0);
	len = ft_count(s, c);
	str = (char **) malloc(sizeof(char *) * (len + 1));
	if (!str)
		return (0);
	str = ft_clone(s, c, len);
	return (str);
}
