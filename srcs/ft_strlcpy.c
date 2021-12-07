/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 15:20:28 by tpons             #+#    #+#             */
/*   Updated: 2021/12/07 15:48:56 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t l;

	i = 0;
	if (!dst || !src)
		return (0);
	l = ft_strlen(src);
	if (!dstsize)
		return (l);
	while (src[i] != '\0' && i < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize < l)
		dst[--i] = '\0';
	else if (dstsize != 0)
		dst[i] = '\0';
	return (l);
}
