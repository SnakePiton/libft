/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bv10 <bv10@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:24:59 by bv10              #+#    #+#             */
/*   Updated: 2024/10/26 20:33:25 by bv10             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t m)
{
	void	*str;
	char	*s;
	size_t	i;

	str = (void *) malloc (n * m);
	if (str == NULL)
		return (NULL);
	s = str;
	i = 0;
	while (i < n * m)
	{
		s[i] = 0;
		i++;
	}
	return (str);
}
