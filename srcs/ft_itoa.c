/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjouffro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 20:32:30 by mjouffro          #+#    #+#             */
/*   Updated: 2018/11/23 13:54:30 by mjouffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_itoa(int nb)
{
	char			*res;
	size_t			len;
	size_t			i;

	len = ft_digitcount(nb);
	if (!(res = (char*)ft_strnew(len + (nb < 0 ? 1 : 0))))
		return (NULL);
	i = 0;
	if (nb < 0)
		res[i++] = '-';
	while (i < len)
	{
		res[--len] = '0' + (nb % 10);
		nb = nb / 10;
	}
	return (res);
}
