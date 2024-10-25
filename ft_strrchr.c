/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bv10 <bv10@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:56:18 by bv10              #+#    #+#             */
/*   Updated: 2024/10/24 14:20:52 by bv10             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	int		a;

	i = 0;
	a = 0;
	if (c == 0)
		return (0);
	while (str[i])
	{
		if (str[i] == c)
			a = i;
		i++;
	}
	if (a == 0)
		return (0);
	return ((char *) str + a);
}

int main()
{
	char str[] = "baris varmaz";
	printf("%s\n", ft_strrchr(str,'a'));
}