/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bv10 <bv10@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 00:22:04 by bv10              #+#    #+#             */
/*   Updated: 2024/11/14 18:05:53 by bv10             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[i] == '\0')
		return ((char *) big);
	while (i < len && big[i])
	{
		while (big[i + j] == little[j])
		{
			j++;
			if (!little[j])
				return ((char *) big + i);
		}
		j = 0;
		i++;
	}
	return (0);
}
