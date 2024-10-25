/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bv10 <bv10@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:59:53 by bv10              #+#    #+#             */
/*   Updated: 2024/10/23 16:49:01 by bv10             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	size_t				j;
	size_t				c;
	const unsigned char	*src1;
	unsigned char		*dest1;

	i = 0;
	j = 1;
	c = 0;
	src1 = src;
	dest1 = dest;
	if (dest > src)
	{
		j = -1;
		i = n - 1;
	}
	while (c < n)
	{
		dest1[i] = src1[i];
		i += j;
		c++;
	}
}
