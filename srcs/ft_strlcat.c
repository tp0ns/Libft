/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 15:04:09 by tpons             #+#    #+#             */
/*   Updated: 2021/12/07 15:48:56 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	ldest;
	size_t	lsrc;

	i = 0;
	ldest = ft_strlen(dst);
	lsrc = ft_strlen(src);
	if (dstsize <= ldest)
		return (lsrc + dstsize);
	while ((ldest + i) < dstsize && src[i])
	{
		dst[ldest + i] = src[i];
		i++;
	}
	if (ldest + i == dstsize && ldest < dstsize)
		dst[ldest + --i] = '\0';
	else
		dst[ldest + i] = '\0';
	if (ldest > dstsize)
		return (dstsize + lsrc);
	return (ldest + lsrc);
}
