/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 17:17:29 by tpons             #+#    #+#             */
/*   Updated: 2021/12/07 15:48:56 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = (char *)dst;
	s = (const char *)src;
	if (dst == src || n == 0)
		return (dst);
	if (!dst && !src)
		return (0);
	while (n-- > 0)
		*d++ = (char)*s++;
	return (dst);
}
