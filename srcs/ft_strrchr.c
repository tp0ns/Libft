/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 17:04:34 by tpons             #+#    #+#             */
/*   Updated: 2021/12/07 15:48:56 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int l;

	l = ft_strlen((char *)s);
	s = s + l;
	while (l && *s != c)
	{
		l--;
		s--;
	}
	if (*s == c)
		return ((char *)s);
	return (0);
}
