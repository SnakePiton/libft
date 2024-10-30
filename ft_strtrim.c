/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bv10 <bv10@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:50:28 by bv10              #+#    #+#             */
/*   Updated: 2024/10/30 12:04:53 by bv10             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(char const *s, char const *set, unsigned int i)
{
	char			*str;
	unsigned int	count;
	int				next;

	count = 0;
	next = 1;
	if (i > 0)
		next = -1;
	str = (char *) s;
	while (str[i])
	{
		if (ft_strchr(set, str[i]))
		{
			count++;
			i += next;
		}
		else
			break ;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*d;
	unsigned int	start;
	unsigned int	end;
	unsigned int	len;

	len = ft_strlen(s1);
	start = ft_count(s1, set, 0);
	end = ft_count(s1, set, len - 1);
	d = (char *) malloc(sizeof(char) * (len - start - end) + 1);
	if (!d)
		return (NULL);
	ft_strlcpy(d, s1 + start, len - start - end + 1);
	return (d);
}
