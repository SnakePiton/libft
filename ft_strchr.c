/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bv10 <bv10@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:01:47 by bv10              #+#    #+#             */
/*   Updated: 2024/10/24 14:27:46 by bv10             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	if (c == 0)
		return (0);
	while (str[i])
	{
		if (str[i] == c)
			return ((char *) str + i);
		i++;
	}
	return ((char *) str + i);
}

int main()
{
	char str[] = "baris varmaz";
	char  *a = ft_strchr(str, 'c');
	printf("%s\n", a);
}