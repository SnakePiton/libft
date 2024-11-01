/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bv10 <bv10@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 19:48:01 by bv10              #+#    #+#             */
/*   Updated: 2024/10/30 20:22:24 by bv10             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_convert(int n, int len, int sgn)
{
	char	*rtn;
	int		i;

	rtn = (char *) malloc(sizeof(char) * len + 1);
	if (!rtn)
		return (0);
	i = len - 1;
	if (n == 0)
		rtn[i] = 48;
	while (i >= 0 && n > 0)
	{
		rtn[i] = (n % 10) + 48;
		n /= 10;
		i--;
	}
	if (sgn)
		rtn[i] = '-';
	rtn[len + sgn] = '\0';
	return (rtn);
}

char	*ft_itoa(int n)
{
	int		len;
	int		m;
	int		sgn;
	char	*rtn;

	len = 0;
	sgn = 0;
	if (n == 0)
		len++;
	if (n < 0)
	{
		len++;
		n *= -1;
		sgn = 1;
	}
	m = n;
	while (m > 0)
	{
		m /= 10;
		len++;
	}
	rtn = ft_convert(n, len, sgn);
	return (rtn);
}
