/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bv10 <bv10@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 00:22:04 by bv10              #+#    #+#             */
/*   Updated: 2024/10/26 01:12:56 by bv10             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!little[i])
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
	return ((char *) little + 3);
}

#include <string.h>

int	main()
{
	char x[] = ""; 
	char a[] = "baris varma 2002ab200 varmavarmaz 21";
	char b[] = "varmaz";
	printf("%s\n", ft_strnstr(x,b,38));
	//printf("%s\n" , strstr(a,b));
}