/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bv10 <bv10@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:01:54 by bv10              #+#    #+#             */
/*   Updated: 2024/10/28 16:44:04 by bv10             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*s;
	size_t	t;
	size_t	max;

	t = ft_strlen(str);
	max = len;
	if (!str)
		return (0);
	if (start >= t || max == 0)
		return (0);
	if (max > t - start)
		max = t - start;
	s = (char *) malloc(sizeof(char) * (max + 1));
	if (!s)
		return (NULL);
	ft_strlcpy(s, str + start, max + 1);
	return (s);
}
