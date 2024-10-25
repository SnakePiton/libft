/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bv10 <bv10@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:46:11 by bv10              #+#    #+#             */
/*   Updated: 2024/10/23 20:58:49 by bv10             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	a;
	size_t	b;
	size_t	i;

	a = ft_strlen(dest);
	b = ft_strlen(src);
	i = 0;
	if (n == 0)
		return (b);
	if (n <= a)
		return (b + n);
	while (src[i] && a + i < n - 1)
	{
		dest[a + i] = src[i];
		i++;
	}
	dest[a + i] = '\0';
	return (a + b);
}
