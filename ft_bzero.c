/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bv10 <bv10@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:40:04 by bv10              #+#    #+#             */
/*   Updated: 2024/10/23 16:48:30 by bv10             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*arr;
	size_t			i;

	arr = s;
	i = 0;
	while (arr[i] && i < n)
	{
		arr[i] = 0;
		i++;
	}
}
