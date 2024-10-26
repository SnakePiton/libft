/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bv10 <bv10@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 20:35:16 by bv10              #+#    #+#             */
/*   Updated: 2024/10/26 20:46:29 by bv10             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	n;
	size_t	i;
	char	*s;

	n = ft_strlen(str);
	s = malloc(n + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
