/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iswhitespace.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjouffro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 10:32:20 by mjouffro          #+#    #+#             */
/*   Updated: 2018/11/22 18:08:28 by mjouffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_iswhitespace(int c)
{
	if ((c >= 9 && c <= 13) || (c == 32))
		return (1);
	else
		return (0);
}
